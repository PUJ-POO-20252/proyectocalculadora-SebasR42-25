// main.cpp
#include <iostream>
#include "matematicas.h"
using namespace std;

int main() {
    int x = 10;
    int y = 4;

    int resultado_suma = sumar(x, y);
    int resultado_resta = restar(x, y);


    cout << "Suma: " << resultado_suma << endl;
    cout << "Resta: " << resultado_resta << endl;


    return 0;
}