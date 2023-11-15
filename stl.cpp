#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    // Uso de contenedor vector
    std::vector<int> miVector;
    miVector.push_back(1);
    miVector.push_back(2);
    miVector.push_back(3);

    std::cout << "Contenido del vector: ";
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Uso de contenedor map
    std::map<std::string, int> miMapa;
    miMapa["uno"] = 1;
    miMapa["dos"] = 2;
    miMapa["tres"] = 3;

    std::cout << "Contenido del mapa: ";
    for (const auto& par : miMapa) {
        std::cout << par.first << ":" << par.second << " ";
    }
    std::cout << std::endl;

    // Uso de contenedor set
    std::set<int> miSet;
    miSet.insert(10);
    miSet.insert(20);
    miSet.insert(30);

    std::cout << "Contenido del set: ";
    for (const auto& elemento : miSet) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
