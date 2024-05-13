// Analise de Complexidade

#include <iostream>
#include <vector>
using namespace std;

bool exemplo1(vector<int> v, int X) {
	int tamanho = v.size(); 
	for(int i=0; i<tamanho; i++) { // O(N)
		if(v[i] == X) return true;
	}
	return false;
}

// Resposta
// O(N)

bool exemplo2(vector<int> v) {
	int tamanho = v.size();
	for (int i=0; i<tamanho; i++) {
		for (int j=0; j<tamanho; j++){
			if(i != j && v[i] == v[j])
				return true
		}	
	}
	return false;	
}

// Resposta
// O(N^2)

int exemplo3(vector<int> v){
	int tamanho = v.size();
	int bla = 0;
	for(int i=0; i<tamanho; i++) {
		for(int j=0; j<tamanho; j++) {
			if(v[i] == v[j]) bla++;
		}
	}
	// ...
	
	int ble = 0;
	for(int i=0; i<tamanho; i++) {
		if(v[i] == 10) {
			ble = 2*ble;
		}
	}
	
	// ...
	int bli = 0;
	for(int i=0; i<tamanho; i++) {
		if(v[i] == 5){
			bli += 5;
		}
	}
	
	return bla+ble+bli;
}

// Resposta
// O(N^2)

bool exemplo4(vector<int> v, vector<int> w) {
	int tamanho = v.size();
	int tamanho2 = w.size();
	for(int i=0; i<tamanho; i++) { // O(M)
		for(int j=0; j<tamanho2; j++) { // O(N)
			if(v[i]==v[j]) return true;
		}
	}
	
	return false;
}

// Resposta
// O(M) * O(N)

bool exemplo5(vector<int> idades) {
	int tamanho = idades.size();
	int menor_idade = 200;
	for(int i=0; i<tamanho; i++) {
		if(idades[i] < menor_idade) {
			menor_idade = idades[i];
		}
	}
	int cont = 0;
	for(int i=0; i<tamanho; i++) {
		if(v[i] == menor_idade) {
			cont++;
		}
	}
	return cont > 1;
}

bool exemplo6(vector<int> idades) {
	sort(idades.begin(), idades.end());
	return idades[0] == idades[1];
}

// Os exemplos 5 e 6 fazem a mesma coisa.
// No exemplo 5 tem-se duas repeticoes - O(N) e O(N)
// A complexidade entao eh O(N)

// No exemplo 6
// A complexidade do sort eh O(NLogN). Logo
// a complexidade do programa eh O(NlogN)

// O exemplo 6 eh menos rapido, ou seja, nem sempre o 
// menor programa eh o mais eficiente.


bool exemplo7(set<int> s, vector<int> v) {
	int tamanho = v.size();
	for(int i=0; i<tamanho; i++) { // O(N)
		if(s.count(v[i])) return true; // O(LogN)
	}
	return false;
}

// Resposta
// O(N) * O(LogN) = O(NLogN)
// O metodo count possui complexidade O(LogN)

