#include "Ejercicio02.h"

int main() {
    std::string palabra;
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    if (esPalindroma(palabra, 0, palabra.length() - 1)) {
        std::cout << palabra << " es una palabra palíndroma." << std::endl;
    }
    else {
        std::cout << palabra << " no es una palabra palíndroma." << std::endl;
    }

    return 0;
}

bool Ejercicio02::esPalindroma(std::string s, int inicio, int fin)
{
    return false;
}
