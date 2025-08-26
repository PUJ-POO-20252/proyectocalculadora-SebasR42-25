#include <iostream>
#include "Transponer.h"
using namespace std;

void ingresarMatriz(int A[MAX][MAX], int rows, int cols) {
    cout << "Ingrese los elementos de la matriz (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

void imprimirMatriz(const int A[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void transponerMatriz(const int A[MAX][MAX], int AT[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            AT[j][i] = A[i][j];
        }
    }
}
