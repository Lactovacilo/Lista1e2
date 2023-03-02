#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int notaUm, notaDois, notaTres;
	
	cout << "Insira a primeira nota:\n";
	cin >> notaUm;
	
	while (notaUm < 0 || notaUm > 10){
		cout << "Você inseriu um número inválido, digite novamente: \n";
		cin >> notaUm;
	}
	
	cout << "Insira a segunda nota:\n";
	cin >> notaDois;
	
	while (notaDois < 0 || notaDois > 10){
		cout << "Você inseriu um número inválido, digite novamente: \n";
		cin >> notaDois;
	}
	
	cout << "Insira a terceira nota:\n";
	cin >> notaTres;
	
	while (notaTres < 0 || notaTres > 10){
		cout << "Você inseriu um número inválido, digite novamente: \n";
		cin >> notaTres;
	}
	
	int total = (notaUm + notaDois + notaTres);
	float media = (total/3);
	
	cout << "Sua média foi de " << media;
	
	if (total < 15){
		cout << "\nVocê foi REPROVADO";
	}else if (total >= 15 && total < 21){
		cout << "\nVocê ficou de recuperação";
	}else{
		cout << "\nParabéns você passou";
	}
}
