// main.cpp
#include <iostream>
#include "matematicas.h"
using namespace std;

int main() {
    int x, y;

    // Ingreso dinámico de los valores
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

    return 0;
}
