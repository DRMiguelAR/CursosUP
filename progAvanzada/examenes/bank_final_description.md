# Banco de preguntas — Programación Avanzada

## Sesión 17 — Metodología de diseño de algoritmos (3 preguntas)

**Objetivo a evaluar:** Que el alumno comprenda el proceso de diseño de algoritmos: generalizar desde un ejemplo concreto, escribir pseudocódigo antes de implementar, y verificar la solución con el caso de prueba del enunciado.

| # | Tipo | Tema |
|---|------|------|
| 1 | TF   | El caso de prueba del enunciado no garantiza corrección general |
| 2 | MC   | Objetivo de resolver el ejemplo a mano antes de codificar |
| 3 | MAT  | Etapas del proceso: generalizar, pseudocódigo, verificar |

---

## Sesión 19 — Proyectos de múltiples archivos

### Punto 1 — Módulos: declaración vs. definición (4 preguntas)

**Objetivo a evaluar:** Que el alumno distinga entre prototipo (declaración en `.h`) y definición (implementación en `.cpp`), entienda por qué el `.cpp` debe incluir su propio `.h`, y reconozca las ventajas técnicas de dividir un proyecto en módulos.

**Caso empleado:** Sistema de control de calidad con módulos `matematicas`, `red`, `interfaz` e `inventario`.

| # | Tipo | Tema |
|---|------|------|
| 4 | MC   | Diferencia técnica entre prototipo en `.h` y definición en `.cpp` |
| 5 | TF   | Prototipo y definición deben coincidir en tipo de retorno |
| 6 | MAT  | Archivo `.h` → prototipo; archivo `.cpp` → definición |
| 7 | MA       | Ventajas técnicas concretas de la modularización |

### Punto 2 — Una definición, múltiples declaraciones (4 preguntas)

**Objetivo a evaluar:** Que el alumno comprenda que en C++ declarar es distinto a definir, que declarar múltiples veces es válido, que definir más de una vez en el mismo programa produce un error de enlazado, y que ese error ocurre en la etapa de *linking*, no de compilación.

| #  | Tipo      | Tema |
|----|-----------|------|
| 8  | TF        | Declarar un prototipo varias veces no es un error |
| 9  | MC        | Consecuencia de definir una función en dos `.cpp` enlazados juntos |
| 10 | FIB_PLUS  | Completar: declarar (cuantas veces) vs. definir (solo una vez) |
| 11 | MC        | Etapa en que se detecta la definición duplicada: *linking* |
