# Detalles técnicos del banco de preguntas

## Archivo principal

`bank_final.tsv` — importable directamente en Blackboard Ultra.

## Formato requerido por Blackboard Ultra

| Parámetro | Valor |
|-----------|-------|
| Tipo de archivo | `.tsv` |
| Codificación | **Windows-1252** (no UTF-8) |
| Saltos de línea | **CRLF** (`\r\n`) |
| Delimitador | Tabulación (`\t`) |
| Sin línea de encabezado | — |
| Sin líneas en blanco entre registros | — |
| Palabras clave de respuesta | en inglés: `correct`, `incorrect`, `true`, `false` |

> UTF-8 y LF producen error de importación. La conversión a Windows-1252
> se hace con `iconv` o con el script Python documentado abajo.

## Tipos de pregunta utilizados

| Código | Tipo | Estructura |
|--------|------|-----------|
| `MC` | Opción múltiple (una correcta) | `MC \t pregunta \t opción \t correct\|incorrect ...` |
| `MA` | Opción múltiple (varias correctas) | `MA \t pregunta \t opción \t correct\|incorrect ...` |
| `TF` | Verdadero/Falso | `TF \t pregunta \t true\|false` |
| `MAT` | Relacionar columnas | `MAT \t pregunta \t término \t definición ...` |
| `FIB_PLUS` | Completar (varios espacios) | `FIB_PLUS \t pregunta con [a] y [b] \t a \t respuesta \t \t b \t respuesta` |

## Cómo agregar preguntas

Escribir el contenido en UTF-8 y convertir al vuelo con Python:

```python
questions = [
    ["MC", "Texto de la pregunta", "Opción A", "correct", "Opción B", "incorrect"],
    ["TF", "Texto de la pregunta", "false"],
    # ...
]

lines = ["\t".join(q) for q in questions]
content = "\r\n".join(lines) + "\r\n"
encoded = content.encode("windows-1252")

with open("bank_final.tsv", "ab") as f:  # "ab" para agregar sin sobreescribir
    f.write(encoded)
```

## Decisiones de diseño

- **Preguntas cortas y concretas**: sin contexto narrativo innecesario.
- **Escenario por sección**: cuando aplica, se usa un caso concreto
  (sistema de control de calidad) para anclar las preguntas en contexto real.
  El escenario se incluye en el texto de cada pregunta que lo requiera.
- **Sin preguntas sobre jueces en línea ni cómputo competitivo**: aunque
  las sesiones 17 y 18 usan problemas de omegaUp como vehículo, el examen
  evalúa metodología y conceptos de C++, no el funcionamiento de los jueces.
- **Sin mencionar "ODR" por nombre**: los alumnos no conocen el término;
  las preguntas describen el comportamiento funcionalmente.
- **Tipos variados**: se mezclan MC, TF, MAT, MA y FIB_PLUS para no
  hacer el examen monótono.
