#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, centena, dezena, unidade;
	
	cout << "Digite um número de 3 dígitos (Ex. 157)\n";
	cin >> n;
	
	while (n >= 1000 || n < 100){
		cout << "\nVocê inseriu um número que não possui três dígitos, tente novamente.\n";
		cin >> n;
	}
	
	centena = (n / 100);
	cout << "\nCentena: " << centena;
	
	dezena = ((n % 100)/10);
	cout << "\nDezena: " << dezena;
	
	unidade = (n % 10);
	cout << "\nUnidade: " << unidade;
	
	cout << "\nA soma dos dígitos é: " << (centena + dezena + unidade);
}
