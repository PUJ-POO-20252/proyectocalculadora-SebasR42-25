// main.cpp
#include <iostream>
#include "matematicas.h"   // Mis Funciones Básicas: Sumar, Restar, Multiplicar y Dividir.
#include "matriz_utils.h"  // Funciones Nuevas con Matrices.
using namespace std;

int main() {
    // PARTE 1: Calculadora Básica
    int x, y;

    cout << "Ingrese el primer numero: ";
    cin >> x;

    cout << "Ingrese el segundo numero: ";
    cin >> y;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);
    int resultado_multiplicacion = multiplicar(x, y);

    // Evitar division por cero
    if (y == 0) {
        cout << "Division: Error (division por cero)" << endl;
    } else {
        int resultado_dividir = dividir(x, y);
        cout << "Division: " << resultado_dividir << endl;
    }

    cout << "Suma: " << resultado_suma << endl;
    cout << "Resta: " << resultado_resta << endl;
    cout << "Multiplicacion: " << resultado_multiplicacion << endl;

    // PARTE 2: Operaciones con Matrices
    const int FILAS = 2;
    const int COLS = 3;

    int A[FILAS][COLS];
    int B[FILAS][COLS];
    int C[FILAS][COLS]; // Resultado de las Sumas de Matrices A y B

    cout << "\n=== Operaciones con Matrices ===\n";

    // Entrada de Matriz A
    cout << "Ingrese los valores para Matriz A (" << FILAS << "x" << COLS << "):\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Entrada de Matriz B
    cout << "Ingrese los valores para Matriz B (" << FILAS << "x" << COLS << "):\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Mostrar matrices ingresadas
    imprimirMatriz("Matriz A:", A);
    imprimirMatriz("Matriz B:", B);

    // Operación de suma
    sumarMatrices(A, B, C);
    imprimirMatriz("Matriz A + B:", C);

    return 0;
}
