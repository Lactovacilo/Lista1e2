#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, milhar, centena, dezena, unidade;
	
	cout << "Digite um número de 1 a 4 dígitos (Ex. 1577)\n";
	cin >> n;
	
	while (n >= 10000 || n < 0){
		cout << "\nVocê inseriu um número que não possui três dígitos, tente novamente.\n";
		cin >> n;
	}
	
	milhar = (n / 1000);
	cout << "\nMilhar: " << milhar;
	
	centena = ((n % 1000)/100);
	cout << "\nCentena: " << centena;
	
	dezena = ((n % 100)/10);
	cout << "\nDezena: " << dezena;
	
	unidade = (n % 10);
	cout << "\nUnidade: " << unidade;
	
	cout << "\nA soma dos dígitos é: " << (milhar + centena + dezena + unidade);
}
