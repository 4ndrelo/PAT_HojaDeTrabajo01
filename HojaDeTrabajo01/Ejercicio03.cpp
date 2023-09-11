#include "Ejercicio03.h"
bool esPotenciaDeDos(int n) {
    // Caso base: Si n es igual a 1, es una potencia de dos
    if (n == 1) {
        return true;
    }

    // Si n es impar o menor que 1, no es una potencia de dos
    if (n % 2 != 0 || n < 1) {
        return false;
    }

    // Llamada recursiva dividiendo n por 2
    return esPotenciaDeDos(n / 2);
}
bool Ejercicio03::esPotenciaDeDos(int n)
{
    return false;
}
int main() {
    int n;
    std::cout << "Ingrese un número entero: ";
    std::cin >> n;

    if (esPotenciaDeDos(n)) {
        std::cout << n << " es una potencia de dos." << std::endl;
    }
    else {
        std::cout << n << " no es una potencia de dos." << std::endl;
    }

    return 0;
}