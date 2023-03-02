#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, centena, dezena, unidade;
	
	cout << "Digite um n�mero de 3 d�gitos (Ex. 157)\n";
	cin >> n;
	
	while (n >= 1000 || n < 100){
		cout << "\nVoc� inseriu um n�mero que n�o possui tr�s d�gitos, tente novamente.\n";
		cin >> n;
	}
	
	centena = (n / 100);
	cout << "\nCentena: " << centena;
	
	dezena = ((n % 100)/10);
	cout << "\nDezena: " << dezena;
	
	unidade = (n % 10);
	cout << "\nUnidade: " << unidade;
	
	cout << "\nA soma dos d�gitos �: " << (centena + dezena + unidade);
}
