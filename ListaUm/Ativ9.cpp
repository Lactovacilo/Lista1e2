#include <iostream>
#include <cmath>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n, centena, dezena, unidade, soma;
	
	cout << "Digite um n�mero de no m�ximo 3 digitos (Ex. 153)\n";
	cin >> n;
	
	centena = (n / 100);
	cout << "\nCentena: " << centena;
	
	dezena = ((n % 100)/10);
	cout << "\nDezena: " << dezena;
	
	unidade = (n % 10);
	cout << "\nUnidade: " << unidade;
	
	soma = (pow(centena, 3) + pow(dezena, 3) + pow(unidade, 3));
	
	cout << "\nA soma dos d�gitos �: " << soma;
	
	if (n == soma){
		cout << "\nPortanto, esse � um n�mero de Armstrong";
	}else {
		cout << "\nPortanto, esse n�o � um n�mero de Armstrong";
	}
	
}
