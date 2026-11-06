# Recorte de polígono Sutherland–Hodgman

Recortá un polígono simple representado por vértices double contra una ventana rectangular axis-aligned inclusiva mediante Sutherland–Hodgman. API con buffer de salida y capacidad explícita; retorna cantidad o cero si no hay vértices/error, diferenciando error con bool y out-count. Manejá capacidad insuficiente sin escrituras parciales.

Las firmas y tipos están definidos en `geom-comp-29.h`. La API documenta los casos vacíos, errores y límites de capacidad.
