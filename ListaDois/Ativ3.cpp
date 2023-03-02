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
	
	cout << "Insira um número para saber todos os números primos menores que ele:";
	cin >> numero;
	
	cout << "Os números primos são: ";
	
	for (int i = 1; i < numero; i++){
		primo = true;
		nPrimos(i);
		
		if (primo == true){
			cout << i << " ";
		}
	}
}
