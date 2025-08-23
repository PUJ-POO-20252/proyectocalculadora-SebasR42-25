#include <iostream>
#include <optional> // for std::optional

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

optional<int> dividir(int a, int b) {
    if (b == 0) {
        cerr << "Error: intento de division por cero con a = " << a << endl;
        return nullopt; // no valid result
    }
    return a / b;
}