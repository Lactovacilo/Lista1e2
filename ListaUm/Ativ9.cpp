#include <iostream>
#include <cmath>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, centena, dezena, unidade, soma;
	
	cout << "Digite um número de no máximo 3 digitos (Ex. 153)\n";
	cin >> n;
	
	centena = (n / 100);
	cout << "\nCentena: " << centena;
	
	dezena = ((n % 100)/10);
	cout << "\nDezena: " << dezena;
	
	unidade = (n % 10);
	cout << "\nUnidade: " << unidade;
	
	soma = (pow(centena, 3) + pow(dezena, 3) + pow(unidade, 3));
	
	cout << "\nA soma dos dígitos é: " << soma;
	
	if (n == soma){
		cout << "\nPortanto, esse é um número de Armstrong";
	}else {
		cout << "\nPortanto, esse não é um número de Armstrong";
	}
	
}
