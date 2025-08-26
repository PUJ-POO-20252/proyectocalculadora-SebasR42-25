#ifndef TRANSPONER_H
#define TRANSPONER_H

const int MAX = 8;

void ingresarMatriz(int A[MAX][MAX], int rows, int cols);
void imprimirMatriz(const int A[MAX][MAX], int rows, int cols);
void transponerMatriz(const int A[MAX][MAX], int AT[MAX][MAX], int rows, int cols);

#endif // TRANSPONER_H
