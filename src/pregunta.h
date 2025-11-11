#ifndef PREGUNTA_H
#define PREGUNTA_H

#include <iostream>
#include <string>
#include <vector>

class Pregunta {
private:
    std::string pregunta;
    std::vector<std::string> opciones;
    int respuestaCorrecta; 

public:
    // Constructores
    Pregunta();
    Pregunta(const std::string& p, const std::vector<std::string>& o, int correcta);

    // Destructor
    ~Pregunta();

    // Métodos get/set
    std::string getPregunta() const;
    void setPregunta(const std::string& p);

    std::vector<std::string> getOpciones() const;
    void setOpciones(const std::vector<std::string>& o);

    int getRespuestaCorrecta() const;
    void setRespuestaCorrecta(int r);

    // Funciones
    void mostrarPregunta() const;
    bool verificarRespuesta(int seleccion) const;
    void mostrarRespuestaCorrecta() const;
};

#endif
