#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int idade;
	string nome;
	
	cout << "Digite seu nome (Tudo junto):\n";
	cin >> nome;
	
	cout << nome << ", digite a sua idade:\n";
	cin >> idade;
	
	if(idade > 0 && idade < 18){
		cout << nome << ", voc� � menor de idade";
	}else if(idade >= 18 && idade <= 65){
		cout << nome << ", voc� � adulto";
	}else if (idade > 65){
		cout << nome << ", voc� � idoso";
	}else{
		cout << "Voc� inseriu um n�mero inv�lido";
	}
}
