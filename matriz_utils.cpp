#include "matriz_utils.h"
#include <iostream>
using namespace std;

void sumarMatrices(const int (&Ma)[2][3], const int (&Mb)[2][3], int (&resultado)[2][3]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultado[i][j] = Ma[i][j] + Mb[i][j];
        }
    }
}

void imprimirMatriz(const string& titulo, const int (&mat)[2][3]) {
    cout << titulo << '\n';
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << "\t";
        }
        cout << '\n';
    }
    cout << endl;
}
