#include <iostream>

using namespace std;

float adicao(float a, float b){
	return a + b;
}

float subtracao(float a, float b){
	return a - b;
}

float multiplicacao(float a, float b){
	return a * b;
}

float divisao(float a, float b){
	return a / b;
}

main(){
	setlocale (LC_ALL, "portuguese");
	
	float numero1, numero2;
	int opcao;
	
	cout << "Informe o primeiro n�mero: ";
	cin >> numero1;
	
	cout << "Informe o segundo n�mero: ";
	cin >> numero2;
	
	do{
		cout << "\n\nVoc� gostaria de somar, subtrair, multiplicar ou dividir estes valores?";
		cout << "\n1 - Soma";
		cout << "\n2 - Subtra��o";
		cout << "\n3 - Multiplica��o";
		cout << "\n4 - Divis�o";
		cout << "\n5 - Sair\n";
		
		cin >> opcao;
		
		switch (opcao) {
			case 1:
				cout << "\nSoma dos n�meros:\n";
				cout << adicao(numero1, numero2);
				break;
			case 2:
				cout << "\nSubtra��o dos n�meros:\n";
				cout << subtracao(numero1, numero2);
				break;
			case 3:
				cout << "\nMultiplica��o dos n�meros:\n";
				cout << multiplicacao(numero1, numero2);
				break;
			case 4:
				cout << "\nDivis�o dos n�meros:\n";
				cout << divisao(numero1, numero2);
				break;
			case 5:
				cout << "\nSaindo do c�digo...";
				break;
			default:
				cout << "\nN�mero inv�lido";
		}
	}while (opcao != 5);
}
