#include "Juego.h"
#include "Pregunta.h"

int main() {
    Juego juego;

    // Agregar preguntas
    juego.agregarPregunta(Pregunta(
        "El área de un círculo es 154 cm². Si π=3,14, ¿cuál es su radio aproximado?",
        {"6 cm", "14 cm", "12 cm", "7 cm"},
        3
    ));

    juego.agregarPregunta(Pregunta(
        "La recta y=3x+2 corta al eje x en:",
        {"(0, 2)", "(2/3, 0)", "(-2/3, 0)", "(0, -2)"},
        2
    ));

    juego.agregarPregunta(Pregunta(
        "El precio de un producto aumenta un 20 % y luego disminuye un 10 %. Si el precio inicial era $10000, ¿cuál es el precio final?",
        {"$10 800", "$10 000", "$10 200", "$11 000"},
        0
    ));

    juego.agregarPregunta(Pregunta(
        "Si f(x)=2x^2-3x+1, entonces f(-2) es:",
        {"15", "19", "11", "9"},
        0
    ));

    juego.iniciar();

    return 0;
}
