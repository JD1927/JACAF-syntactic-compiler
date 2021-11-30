# [Proyecto] : Compilador JACAF

## Integrantes

- Juan David Aguirre Córdoba, **[juanaguirre237288@correo.itm.edu.co](mailto:juanaguirre237288@correo.itm.edu.co)**.
- Andrés Felipe Aristizábal Velasquez, **[andresaristizabal22119@correo.itm.edu.co](mailto:andresaristizabal22119@correo.itm.edu.co)**.

## Compilador Sintáctico JACAF

### Archivos importantes

#### Carpetas

- `src:` Carpeta donde están los archivos con extensiones `*.l` y `*.y`
- `compilation:` Carpeta donde están los archivos con extensiones `*.c`, `*.tab.c` y `*.tab.h`
- `dist:` Carpeta donde está la compilación de los archivos con extensión `*.c`. En otras palabras, el ejecutable
- `test:` Capeta donde está el archivo con extensión `*.jacaf` que será analizado por el ejecutable

### Pasos a seguir

Una vez descargado el repositorio y estando en la carpeta `~/JACAF-syntactic-compiler`:

1. `cd src && flex -o ../compilation/jacaf-lexical.c jacaf-lexical.l`
1. `bison -d -o ../compilation/jacaf-syntactical.tab.c jacaf-syntactical.y`
1. `cd .. && cd compilation && gcc *.c -o ../dist/jacaf`
1. `cd .. && cd dist && ./jacaf ../test/example.jacaf`
