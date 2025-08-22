#include "matriz_utils.h"
#include <iostream>

void sumarMatrices(const int (&a)[2][3], const int (&b)[2][3], int (&resultado)[2][3]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
}

void imprimirMatriz(const std::string& titulo, const int (&mat)[2][3]) {
    std::cout << titulo << '\n';
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << mat[i][j] << "\t";
        }
        std::cout << '\n';
    }
    std::cout << std::endl;
}
