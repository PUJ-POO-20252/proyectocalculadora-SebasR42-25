#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if (b == 0) {
        cerr << "Error: intento de division por cero con a = " << a << endl;
        return 0;
    }
    return a / b;
}
