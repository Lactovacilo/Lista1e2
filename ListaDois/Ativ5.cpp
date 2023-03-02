#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, fatorial = 1;
	
	cout << "Digite um número para saber seu fatorial:\n";
	cin >> n;
	
	for (int i = n; i > 0; i--){
		fatorial *= i;
	}
	
	cout << "O fatorial de " << n << " é " << fatorial;
}
