#include <iostream>
#include <vector>

using namespace std;

void inverterVetor(vector<int>& vetor, int inicio, int fim) {
    // Condição de parada: quando o índice de início ultrapassa ou é igual ao índice de fim
    if (inicio >= fim) {
        return;
    }
    
    // Troca os elementos nas posições inicio e fim
    int temp = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = temp;
    
    // Chamadas recursivas para inverter os elementos restantes
    inverterVetor(vetor, inicio + 1, fim - 1);
}

int main() {
    vector<int> vetor = {1, 2, 3, 4, 5};
    
    // Chama a função para inverter o vetor
    inverterVetor(vetor, 0, vetor.size() - 1);
    
    // Imprime o vetor invertido
    cout << "Vetor invertido: ";
    for (int num : vetor) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}