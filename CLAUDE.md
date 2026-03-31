# Instrucciones para Claude — Repositorio CursosUP

## Contexto general

Material didáctico para los cursos de **Programación Avanzada** y
**Orientación a Objetos** de la Universidad Panamericana, impartidos
por el Dr. Miguel A. Ramírez.
Los alumnos son estudiantes universitarios de ingeniería.

---

## Notas de clase — Estilo y tono

### Tono general

- **Educativo pero relajado.** No es un manual técnico ni un paper;
  es material de clase. Se puede ser directo e informal sin perder rigor.
- Tutear al lector está bien. Frases como "¿por qué usamos exactamente
  diez dígitos y no nueve?" son preferibles a construcciones impersonales.
- Evitar la solemnidad innecesaria. Si algo tiene una explicación simple
  y memorable, usarla.

### Secuencia didáctica

- Siempre **motivar antes de formalizar**: primero el "por qué", luego
  el "cómo". El alumno debe querer saber la respuesta antes de recibirla.
- Conectar con lo que el alumno ya conoce (dedos para base 10, reloj para
  base 60, etc.).
- Los ejemplos van antes de las definiciones formales, no después.

### Estructura de cada sección

- Sección de apertura con una pregunta o situación concreta.
- Desarrollo con ejemplos paso a paso.
- Cajas de entorno al final para reforzar (`recuerda`, `consejo`,
  `advertencia`, `tecnico`, `ejemplo`).
- El resumen al final del documento es una lista de bullets concisos,
  no prosa.

### Lenguaje

- En español. Sin anglicismos innecesarios; usar el término en inglés
  solo cuando es el estándar en la industria (e.g. *bit*, *byte*,
  *float*, `NaN`).
- Las palabras clave van en **negrita** la primera vez que aparecen.
- Nombres de tipos, funciones y valores literales van en `\texttt{}` o
  en el entorno `\cpp{}`.

### Contenido histórico y cultural

- Incluir contexto histórico cuando aporte motivación o curiosidad
  (origen de la base 10, los babilonios y la base 60, el estándar ASCII,
  etc.). Siempre con referencia citada.
- El contexto histórico va al principio de la sesión, como gancho,
  no al final.

### Ejercicios

- Los ejercicios cubren **todos los temas** de la sesión, en orden de
  menor a mayor dificultad dentro de cada bloque.
- Incluir al menos un ejercicio que conecte temas distintos de la sesión.
- Los ejercicios se resuelven **a mano** (lápiz y papel), salvo que la
  sesión sea explícitamente de código.
- Enunciar de forma concreta: datos de entrada claros, pregunta clara.

---

## Notas del profesor — Diferencias con las notas del alumno

- Usa `\usepackage[profesor]{progavanzada}` (portada azul UP).
- Incluye `\begin{notaprofesor}` con:
  - Preguntas de arranque y sondeo sugeridas (con la respuesta esperada).
  - Tiempos estimados por bloque.
  - FAQs con respuesta completa.
  - Soluciones a los ejercicios y problemas de concurso.
  - Sugerencias de demo en vivo cuando aplica.
- El tono aquí sí puede ser más técnico: el profesor ya domina el tema.

---

## Compilación LaTeX

```
pdflatex -interaction=nonstopmode sesionNN_tema.tex
```

Los PDFs compilados van a `pdf/`; los auxiliares (`.aux`, `.log`, `.out`,
`.toc`) **no se suben al repositorio**.

---

## Nomenclatura de archivos

| Tipo | Patrón |
|------|--------|
| Notas alumno (tex) | `notas_alumno/latex/sesionNN_tema.tex` |
| Notas alumno (pdf) | `notas_alumno/pdf/sesionNN_tema.pdf` |
| Notas profesor (tex) | `notas_profesor/latex/sesionNN_tema_profesor.tex` |
| Notas profesor (pdf) | `notas_profesor/pdf/sesionNN_tema_profesor.pdf` |
| Cuaderno Jupyter | `sesiones/sesionNN_tema.ipynb` |
| Material inicial | `materialInicial/sesionNN/` |
