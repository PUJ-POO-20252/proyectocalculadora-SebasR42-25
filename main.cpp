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
    int resultado_dividir = dividir(x, y);

    cout << "Suma: " << resultado_suma << endl;
    cout << "Resta: " << resultado_resta << endl;
    cout << "Multiplicacion: " << resultado_multiplicacion << endl;
    cout << "Division: " << resultado_dividir << endl;

    // PARTE 2: Operaciones con Matrices
    int A[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int B[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int C[2][3]; // Resultado de las Sumas de Matrices A y B

    cout << "\n=== Operaciones con Matrices ===\n";
    imprimirMatriz("Matriz A:", A);
    imprimirMatriz("Matriz B:", B);

    sumarMatrices(A, B, C);
    imprimirMatriz("Matriz A + B:", C);

    return 0;
}
