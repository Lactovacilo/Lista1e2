#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, soma = 0;
	
	cout << "Digite um n�mero para saber os n�meros perfeitos:\n";
	cin >> n;
	
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			soma += i;
		}
	}
	
	if (soma == n){
		cout << "\nO n�mero � perfeito";
	}else{
		cout << "\nO n�mero n�o � perfeito";
	}
}
