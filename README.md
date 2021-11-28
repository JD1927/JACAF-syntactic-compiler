# [Proyecto] : Compilador JACAF

## Integrantes

- Juan David Aguirre Córdoba, **[juanaguirre237288@correo.itm.edu.co](mailto:juanaguirre237288@correo.itm.edu.co)**.
- Andrés Felipe Aristizábal Velasquez, **[andresaristizabal22119@correo.itm.edu.co](mailto:andresaristizabal22119@correo.itm.edu.co)**.

## Compilador Sintáctico JACAF

1. `cd src && flex -o ../compilation/jacaf-lexical.c jacaf-lexical.l`
1. `cd src && bison -d -o ../compilation/jacaf-syntactical.tab.c jacaf-syntactical.y`
1. `cd compilation && gcc *.c -o ../dist/jacaf`
1. `cd dist && ./jacaf`
