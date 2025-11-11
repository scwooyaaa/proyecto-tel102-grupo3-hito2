#ifndef JUEGO_H
#define JUEGO_H

#include <iostream>
#include <vector>
#include "Pregunta.h"

class Juego {
private:
    std::vector<Pregunta> preguntas;
    int puntaje;

public:
    // Constructor y destructor
    Juego();
    ~Juego();

    //Funciones
    void agregarPregunta(const Pregunta& p);
    void iniciar();
    void mostrarResultado() const;
};

#endif
