#include <iostream>

// Espacio de nombres Ciencia
namespace Ciencia {

    // Subespacio de nombres Física
    namespace Fisica {

        // Constante para la velocidad de la luz en m/s
        const double velocidadDeLaLuz = 299792458.0;

        // Función para calcular la energía (E=mc^2)
        double calcularEnergia(double masa) {
            return masa * velocidadDeLaLuz * velocidadDeLaLuz;
        }
    }
}

int main() {
    // Uso de las constantes y funciones de los espacios de nombres Ciencia y Física
    double masa = 1.0; // en kilogramos

    // Calcular y mostrar la energía utilizando la función de Física
    double energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "La energia correspondiente a una masa de " << masa << " kg es: " << energia << " joules." << std::endl;

    return 0;
}
