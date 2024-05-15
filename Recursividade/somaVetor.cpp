#include <iostream>
#include <vector>

using namespace std;

int somaVetor(const vector<int>& vetor, int indice) {
    // quando o indice atinge o tamanho do vetor
    if (indice >= vetor.size()) {
        return 0;
    }

    // recursiva para somar os elementos restantes
    return vetor[indice] + somaVetor(vetor, indice + 1);
}

// o & passa o vetor por referência, permitindo que a função trabalhe
// diretamente com o vetor original.

int main() {
    vector<int> vetor = {1, 2, 3, 4, 5};
    int resultado = somaVetor(vetor, 0);

    cout << "A soma dos elementos do vetor é: " << resultado << endl;
    return 0;
}