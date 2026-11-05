#!/usr/bin/env python3
"""Inventaria señales de problemas del banco sin modificar los ejercicios.

Los resultados son candidatos para revisión, no una clasificación pedagógica definitiva.
"""
import argparse
import hashlib
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

import yaml

RELLENO = re.compile(r'if\s*\(\s*val\s*<=\s*0\s*\)\s*return\s*0\s*;\s*return\s+val\s*\*\s*2\s*;')
DUDOSA = re.compile(r'assert\s*\(\s*(?:true|1)\s*\)|res\s*>=\s*0\s*\|\|\s*res\s*==\s*10|res\s*<=\s*0\s*\|\|\s*res\s*>=\s*-100')
CORTE_GENERADO = re.compile(r'^###\s*(?:📋|🧪|⚠️|🎯)', re.M)
TIPOS = {'concepto', 'practica_guiada', 'laboratorio', 'desafio', 'parcial_previo'}


def auditar(banco: Path) -> dict:
    ejercicios = []
    textos = defaultdict(list)
    for archivo in sorted(banco.glob('*/*/ejercicio.yaml')):
        directorio = archivo.parent
        relativo = directorio.relative_to(banco).as_posix()
        hallazgos = []
        try:
            meta = yaml.safe_load(archivo.read_text(encoding='utf-8')) or {}
            if not isinstance(meta, dict):
                raise ValueError('el YAML no es un objeto')
        except (OSError, ValueError, yaml.YAMLError) as exc:
            ejercicios.append({'ejercicio': relativo, 'hallazgos': ['yaml_invalido'], 'detalle': str(exc)})
            continue
        sol = directorio / 'solucion.c'
        texto_sol = sol.read_text(encoding='utf-8', errors='replace') if sol.exists() else ''
        if not sol.exists():
            hallazgos.append('sin_solucion_c')
        if RELLENO.search(texto_sol):
            hallazgos.append('solucion_relleno')
        if re.search(r'\bTODO\b', texto_sol):
            hallazgos.append('todo_en_solucion')
        if meta.get('tipo') and meta['tipo'] not in TIPOS:
            hallazgos.append('tipo_invalido')
        tests = meta.get('tests_funciones') or []
        if any(isinstance(t, dict) and DUDOSA.search(str(t.get('codigo', ''))) for t in tests):
            hallazgos.append('test_sospechoso')
        if not tests and not list((directorio / 'tests').rglob('*.in')):
            hallazgos.append('sin_tests_detectados')
        enunciado = directorio / 'enunciado.md'
        if not enunciado.exists():
            hallazgos.append('sin_enunciado')
        else:
            original = CORTE_GENERADO.split(enunciado.read_text(encoding='utf-8', errors='replace'), maxsplit=1)[0]
            normalizado = ' '.join(original.casefold().split())
            if len(normalizado) >= 40:
                textos[hashlib.sha256(normalizado.encode()).hexdigest()].append(relativo)
        ejercicios.append({'ejercicio': relativo, 'hallazgos': hallazgos})
    conteos = Counter(h for e in ejercicios for h in e['hallazgos'])
    return {'total': len(ejercicios), 'conteos': dict(sorted(conteos.items())),
            'duplicados_texto_exacto_candidatos': sorted((v for v in textos.values() if len(v) > 1), key=lambda v: v[0]),
            'ejercicios': ejercicios}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('banco', type=Path)
    parser.add_argument('--salida', type=Path)
    args = parser.parse_args()
    if not args.banco.is_dir():
        parser.error('el banco debe ser un directorio existente')
    resultado = json.dumps(auditar(args.banco), ensure_ascii=False, indent=2) + '\n'
    if args.salida:
        args.salida.write_text(resultado, encoding='utf-8')
    else:
        print(resultado, end='')


if __name__ == '__main__':
    main()
