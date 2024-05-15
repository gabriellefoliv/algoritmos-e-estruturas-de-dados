#include <iostream>

using namespace std;

void contador1(int num);
void contador2(int num, int cont=0);

int main() {
    
    contador2(10);

    return 0;
}

// Sem recursividade
void contador1(int num){
    for(int i=0; i<=num; i++) {
        cout << i << "\n";
    }
}

// Com recursividade
void contador2(int num, int cont) {
    cout << cont << "\n";
    if(num > cont) {
        contador2(num, ++cont);
    }
}