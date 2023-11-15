// main.cpp
#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "cuadrado.cpp"
#include "rombo.cpp"

int main() {
    // Uso de las funciones del espacio de nombres Geometria
    double baseTriangulo = 5.0;
    double alturaTriangulo = 8.0;
    double radioCirculo = 4.0;
    double ladoCuadrado = 6.0;
    double diagonalMayorRombo = 7.0;
    double diagonalMenorRombo = 4.0;

    // Calcular y mostrar el área del triángulo
    double areaTriangulo = Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
    std::cout << "El area del triangulo es: " << areaTriangulo << std::endl;

    // Calcular y mostrar el área del círculo
    double areaCirculo = Geometria::calcularAreaCirculo(radioCirculo);
    std::cout << "El area del circulo es: " << areaCirculo << std::endl;

    // Calcular y mostrar el área del cuadrado
    double areaCuadrado = Geometria::calcularAreaCuadrado(ladoCuadrado);
    std::cout << "El area del cuadrado es: " << areaCuadrado << std::endl;

    // Calcular y mostrar el área del rombo
    double areaRombo = Geometria::calcularAreaRombo(diagonalMayorRombo, diagonalMenorRombo);
    std::cout << "El area del rombo es: " << areaRombo << std::endl;

    return 0;
}
