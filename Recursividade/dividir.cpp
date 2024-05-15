// Implemente uma função recursiva que retorne a divisão de dois
// números inteiros positivos A e B (suponha A > B) utilizando
// apenas operadores de soma e subtração

#include <iostream>
using namespace std;

int Dividir(int A, int B) {
    if (A >= B) {
        return 1 + Dividir(A-B, B);

    } else {
        return 0;
    }
}

// retornando por referência o resto da divisão, como parâmetro C

int DividirRef(int *C, int D) {
    if (*C >= D) {
        *C = *C - D;
        return 1 + DividirRef(C, D);
    } else {
        return 0;
    }
}

int main() {

    cout << Dividir(20, 10) << endl;

    return 0;
}