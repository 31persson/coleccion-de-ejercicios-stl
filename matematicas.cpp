#include <iostream>

// Definición del espacio de nombres Matematicas
namespace Matematicas {
    // Función para sumar dos números
    double suma(double a, double b) {
        return a + b;
    }

    // Función para restar dos números
    double resta(double a, double b) {
        return a - b;
    }

    // Función para multiplicar dos números
    double multiplicacion(double a, double b) {
        return a * b;
    }

    // Función para dividir dos números (verifica la división por cero)
    double division(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: División por cero." << std::endl;
            return 0; // Puedes manejar el error de la forma que desees
        }
    }
}

// Función principal (main)
int main() {
    // Uso de las funciones del espacio de nombres Matematicas
    double num1 = 10.5;
    double num2 = 5.0;

    // Suma
    double resultadoSuma = Matematicas::suma(num1, num2);
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << resultadoSuma << std::endl;

    // Resta
    double resultadoResta = Matematicas::resta(num1, num2);
    std::cout << "La resta de " << num1 << " y " << num2 << " es: " << resultadoResta << std::endl;

    // Multiplicación
    double resultadoMultiplicacion = Matematicas::multiplicacion(num1, num2);
    std::cout << "La multiplicación de " << num1 << " y " << num2 << " es: " << resultadoMultiplicacion << std::endl;

    // División
    double resultadoDivision = Matematicas::division(num1, num2);
    std::cout << "La división de " << num1 << " y " << num2 << " es: " << resultadoDivision << std::endl;

    return 0;
}
