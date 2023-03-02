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
	
	cout << "Informe o primeiro número: ";
	cin >> numero1;
	
	cout << "Informe o segundo número: ";
	cin >> numero2;
	
	do{
		cout << "\n\nVocê gostaria de somar, subtrair, multiplicar ou dividir estes valores?";
		cout << "\n1 - Soma";
		cout << "\n2 - Subtração";
		cout << "\n3 - Multiplicação";
		cout << "\n4 - Divisão";
		cout << "\n5 - Sair\n";
		
		cin >> opcao;
		
		switch (opcao) {
			case 1:
				cout << "\nSoma dos números:\n";
				cout << adicao(numero1, numero2);
				break;
			case 2:
				cout << "\nSubtração dos números:\n";
				cout << subtracao(numero1, numero2);
				break;
			case 3:
				cout << "\nMultiplicação dos números:\n";
				cout << multiplicacao(numero1, numero2);
				break;
			case 4:
				cout << "\nDivisão dos números:\n";
				cout << divisao(numero1, numero2);
				break;
			case 5:
				cout << "\nSaindo do código...";
				break;
			default:
				cout << "\nNúmero inválido";
		}
	}while (opcao != 5);
}
