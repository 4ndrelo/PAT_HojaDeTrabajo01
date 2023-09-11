#pragma once

#include <string>
#include <vector>

using std::vector;
using std::string;

class Ejercicio04
{
public:
	vector<string> generarCombinaciones(int n);
};

void generarCombinaciones(int n, int apertura, int cierre, std::string combinacionActual, std::vector<std::string>& resultados) {
    if (combinacionActual.length() == 2 * n) {
        resultados.push_back(combinacionActual);
        return;
    }

    if (apertura < n) {
        generarCombinaciones(n, apertura + 1, cierre, combinacionActual + '(', resultados);
    }

    if (cierre < apertura) {
        generarCombinaciones(n, apertura, cierre + 1, combinacionActual + ')', resultados);
    }
}

std::vector<std::string> generarCombinacionesParentesis(int n) {
    std::vector<std::string> resultados;
    std::string combinacionActual = "";

    generarCombinaciones(n, 0, 0, combinacionActual, resultados);

    return resultados;
}

