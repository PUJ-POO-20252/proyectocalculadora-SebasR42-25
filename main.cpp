// main.cpp
#include <iostream>
#include "matematicas.h"   // Funciones básicas
#include "matriz_utils.h"  // Funciones con matrices fijas 2x3
#include "Transponer.h"    // Funciones para transponer matrices

using namespace std;

int main() {
    // ---------------------------
    // PARTE 1: Calculadora básica
    // ---------------------------
    int x, y;

    cout << "Ingrese el primer numero: ";
    cin >> x;

    cout << "Ingrese el segundo numero: ";
    cin >> y;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);
    int resultado_multiplicacion = multiplicar(x, y);

    if (y == 0) {
        cout << "Division: Error (division por cero)" << endl;
    } else {
        int resultado_dividir = dividir(x, y);
        cout << "Division: " << resultado_dividir << endl;
    }

    cout << "Suma: " << resultado_suma << endl;
    cout << "Resta: " << resultado_resta << endl;
    cout << "Multiplicacion: " << resultado_multiplicacion << endl;

    // ---------------------------
    // PARTE 2: Suma de matrices 2x3
    // ---------------------------
    const int FILAS = 2, COLS = 3;
    int A[FILAS][COLS];
    int B[FILAS][COLS];
    int C[FILAS][COLS];

    cout << "\n=== Operaciones con Matrices (2x3) ===\n";
    cout << "Ingrese los valores para Matriz A:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Ingrese los valores para Matriz B:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    imprimirMatriz("Matriz A:", A);
    imprimirMatriz("Matriz B:", B);

    sumarMatrices(A, B, C);
    imprimirMatriz("Matriz A + B:", C);

    // ---------------------------
    // PARTE 3: Transponer matriz
    // ---------------------------
    int rows, cols;
    int M[MAX][MAX], MT[MAX][MAX];

    cout << "\n=== Transposicion de Matriz ===\n";
    cout << "Ingrese numero de filas (max " << MAX << "): ";
    cin >> rows;
    cout << "Ingrese numero de columnas (max " << MAX << "): ";
    cin >> cols;

    if (rows > MAX || cols > MAX || rows < 1 || cols < 1) {
        cout << "Tamaño inválido!" << endl;
        return 1;
    }

    ingresarMatriz(M, rows, cols);
    transponerMatriz(M, MT, rows, cols);

    cout << "\nMatriz Original:\n";
    imprimirMatriz(M, rows, cols);

    cout << "\nMatriz Transpuesta:\n";
    imprimirMatriz(MT, cols, rows);

    return 0;
}
