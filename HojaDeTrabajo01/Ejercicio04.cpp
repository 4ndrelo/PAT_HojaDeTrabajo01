#include "Ejercicio04.h"

vector<string> Ejercicio04::generaterCombinaciones(int n)
{
    return vector<string>();
}

int main() {
    int n;
    std::cout << "Ingrese el n�mero de pares de par�ntesis: ";
    std::cin >> n;

    std::vector<std::string> combinaciones = generarCombinacionesParentesis(n);

    std::cout << "Combinaciones v�lidas de par�ntesis:" << std::endl;
    for (const std::string& combinacion : combinaciones) {
        std::cout << combinacion << std::endl;
    }

    return 0;
}