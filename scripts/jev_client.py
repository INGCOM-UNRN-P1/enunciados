"""
scripts/jev_client.py — Cliente Python para TypeSafe Jev (System One) con soporte nativo de proxy.
"""

import os
import json
import urllib.request
import urllib.error
from pathlib import Path
from typing import Any, Dict, Optional

def get_api_key() -> str:
    key = os.environ.get("TYPESAFE_API_KEY")
    if key:
        return key.strip()
    
    # Buscar en ~/.env
    home_env = Path.home() / ".env"
    if home_env.is_file():
        for line in home_env.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if line.startswith("TYPESAFE_API_KEY="):
                return line.split("=", 1)[1].strip("\"'")

    # Buscar en .env.local
    local_env = Path(".env.local")
    if local_env.is_file():
        for line in local_env.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if line.startswith("TYPESAFE_API_KEY="):
                return line.split("=", 1)[1].strip("\"'")

    raise RuntimeError("TYPESAFE_API_KEY no encontrada en entorno, ~/.env ni .env.local")

def ask_jev(state: Dict[str, Any], questions: Dict[str, Any], model: str = "jev-latest") -> Dict[str, Any]:
    api_key = get_api_key()
    url = "https://api.typesafe.ai/v1/systemone"
    payload = {
        "model": model,
        "state": state,
        "questions": questions
    }
    data = json.dumps(payload).encode("utf-8")
    req = urllib.request.Request(
        url,
        data=data,
        headers={
            "Content-Type": "application/json",
            "Authorization": f"Bearer {api_key}"
        }
    )
    
    try:
        with urllib.request.urlopen(req, timeout=30) as resp:
            return json.loads(resp.read().decode("utf-8"))
    except urllib.error.HTTPError as e:
        err_msg = e.read().decode("utf-8")
        raise RuntimeError(f"TypeSafe API Error {e.code}: {err_msg}")
    except Exception as e:
        raise RuntimeError(f"Error conectando a TypeSafe Jev: {e}")

def evaluar_enunciado(texto_enunciado: str, titulo: str = "") -> Dict[str, Any]:
    """Evalúa la completitud y calidad pedagógica de un enunciado con Jev."""
    snippet = texto_enunciado[:10000] if len(texto_enunciado) > 10000 else texto_enunciado
    state = {
        "titulo": titulo,
        "enunciado": snippet
    }
    questions = {
        "completo": {
            "type": "noul",
            "instructions": "¿El enunciado cuenta con consigna detallada, especificación de contratos/funciones, precondiciones y ejemplos de ejecución?"
        },
        "calidad": {
            "type": "score",
            "instructions": "Nivel de completitud técnica y pedagógica del enunciado",
            "criteria": [
                "Incompleto, vago, sin ejemplos ni precondiciones",
                "Básico o fragmentado, faltan contratos o casos borde",
                "Completo con consigna clara y ejemplos",
                "Exhaustivo, con contratos, precondiciones, ejemplos y criterios de aceptación"
            ]
        }
    }
    resp = ask_jev(state, questions)
    answers = resp.get("answers", {})
    completo_prob = answers.get("completo", {}).get("noul", 0.0)
    calidad_score = answers.get("calidad", {}).get("score", 0.0)
    return {
        "completo": completo_prob >= 0.7,
        "probabilidad_completo": completo_prob,
        "calidad_score": calidad_score,
        "calidad_max": 3
    }

if __name__ == "__main__":
    import sys
    test_text = "# Prueba\nCalcula x + y."
    if len(sys.argv) > 1:
        test_text = Path(sys.argv[1]).read_text(encoding="utf-8")
    print(json.dumps(evaluar_enunciado(test_text), indent=2))
