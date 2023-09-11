#include "Ejercicio04.h"

vector<string> Ejercicio04::generaterCombinaciones(int n)
{
    return vector<string>();
}

int main() {
    int n;
    std::cout << "Ingrese el número de pares de paréntesis: ";
    std::cin >> n;

    std::vector<std::string> combinaciones = generarCombinacionesParentesis(n);

    std::cout << "Combinaciones válidas de paréntesis:" << std::endl;
    for (const std::string& combinacion : combinaciones) {
        std::cout << combinacion << std::endl;
    }

    return 0;
}