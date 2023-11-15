// circulo.cpp
#include "circulo.h"

#include <cmath>

namespace Geometria {
    // Implementación del constructor
    Circulo::Circulo(double radio) : radio_(radio) {}

    // Implementación del método para calcular el área
    double Circulo::calcularArea() const {
        return 3.14159 * pow(radio_, 2);
    }

    // Implementación del método para calcular el perímetro
    double Circulo::calcularPerimetro() const {
        return 2 * 3.14159 * radio_;
    }
}
