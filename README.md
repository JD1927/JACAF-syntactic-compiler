# [Proyecto] : Compilador JACAF

## Integrantes

- Juan David Aguirre Córdoba, **[juanaguirre237288@correo.itm.edu.co](mailto:juanaguirre237288@correo.itm.edu.co)**.
- Andrés Felipe Aristizábal Velasquez, **[andresaristizabal22119@correo.itm.edu.co](mailto:andresaristizabal22119@correo.itm.edu.co)**.

## Compilador Sintáctico JACAF

1. `flex -o ./compilation/jacaf-lexical.c ./src/jacaf-lexical.l`
1. `bison -d -o ./compilation/jacaf-syntactical.tab.c ./src/jacaf-syntactical.y`
1. `gcc ./compilation/*.c -o ./dist/jacaf`
