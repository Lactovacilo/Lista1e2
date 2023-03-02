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
		cout << nome << ", você é menor de idade";
	}else if(idade >= 18 && idade <= 65){
		cout << nome << ", você é adulto";
	}else if (idade > 65){
		cout << nome << ", você é idoso";
	}else{
		cout << "Você inseriu um número inválido";
	}
}
