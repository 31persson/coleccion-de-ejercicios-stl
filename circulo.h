// circulo.h
#ifndef CIRCULO_H
#define CIRCULO_H

namespace Geometria {
    // Definición de la clase Circulo
    class Circulo {
    public:
        // Constructor
        Circulo(double radio);

        // Métodos para calcular el área y el perímetro
        double calcularArea() const;
        double calcularPerimetro() const;

    private:
        // Atributo de la clase
        double radio_;
    };
}

#endif // CIRCULO_H
