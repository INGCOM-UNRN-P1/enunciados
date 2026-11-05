"""Comprobaciones del inventario no destructivo del banco."""
import importlib.util
from pathlib import Path

MODULO = Path(__file__).resolve().parents[1] / 'scripts' / 'auditar_banco.py'
spec = importlib.util.spec_from_file_location('auditar_banco', MODULO)
auditar_banco = importlib.util.module_from_spec(spec)
spec.loader.exec_module(auditar_banco)


def ejercicio(banco, nombre, solucion='int f(int val) { if (val <= 0) return 0; return val * 2; }'):
    d = banco / 'tema' / nombre
    d.mkdir(parents=True)
    (d / 'ejercicio.yaml').write_text('tipo: ejercicio_individual\ntests_funciones:\n- codigo: assert(1);\n', encoding='utf-8')
    (d / 'solucion.c').write_text(solucion, encoding='utf-8')
    (d / 'enunciado.md').write_text('Una consigna suficientemente larga para reconocer texto idéntico.\n', encoding='utf-8')
    return d


def test_inventario_detecta_senales_y_duplicados_sin_modificar(tmp_path):
    a = ejercicio(tmp_path, 'a')
    ejercicio(tmp_path, 'b', 'int f(void) { return 1; }')
    original = (a / 'ejercicio.yaml').read_bytes()
    informe = auditar_banco.auditar(tmp_path)
    assert informe['total'] == 2
    assert informe['conteos']['solucion_relleno'] == 1
    assert informe['conteos']['tipo_invalido'] == 2
    assert informe['conteos']['test_sospechoso'] == 2
    assert informe['duplicados_texto_exacto_candidatos'] == [['tema/a', 'tema/b']]
    assert (a / 'ejercicio.yaml').read_bytes() == original


def test_yaml_invalido_se_registra_y_continua(tmp_path):
    d = tmp_path / 'tema' / 'mal'
    d.mkdir(parents=True)
    (d / 'ejercicio.yaml').write_text('x: [', encoding='utf-8')
    ejercicio(tmp_path, 'bien')
    informe = auditar_banco.auditar(tmp_path)
    assert informe['total'] == 2
    assert informe['conteos']['yaml_invalido'] == 1


def test_generadores_inseguros_no_se_ejecutan():
    import subprocess
    import sys

    scripts = MODULO.parent
    for nombre in ('enriquecer_metadata_y_tests.py', 'completar_enunciados.py',
                   'proctorizar_banco.py', 'completar_tp3_tp4_metadata.py'):
        resultado = subprocess.run([sys.executable, str(scripts / nombre), '--all'],
                                   capture_output=True, text=True, check=False)
        assert resultado.returncode != 0
        assert 'Script suspendido' in resultado.stderr
