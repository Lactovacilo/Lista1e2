#include <iostream>

using namespace std;

bool primo;

void nPrimos(int k){
	for (int a = 2; a < k; a++){
		if (k % a == 0){
			primo = false;
		}
	}
}

main(){
	setlocale (LC_ALL, "portuguese");
	
	int numero, index = 0;
	
	cout << "Insira um n�mero para saber todos os n�meros primos menores que ele:";
	cin >> numero;
	
	cout << "Os n�meros primos s�o: ";
	
	for (int i = 1; i < numero; i++){
		primo = true;
		nPrimos(i);
		
		if (primo == true){
			cout << i << " ";
		}
	}
}
