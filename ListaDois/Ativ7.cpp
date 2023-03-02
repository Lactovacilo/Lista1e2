#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, soma = 0;
	
	cout << "Digite um número para saber os números perfeitos:\n";
	cin >> n;
	
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			soma += i;
		}
	}
	
	if (soma == n){
		cout << "\nO número é perfeito";
	}else{
		cout << "\nO número não é perfeito";
	}
}
