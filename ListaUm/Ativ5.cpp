#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int notaUm, notaDois, notaTres;
	
	cout << "Insira a primeira nota:\n";
	cin >> notaUm;
	
	while (notaUm < 0 || notaUm > 10){
		cout << "Voc� inseriu um n�mero inv�lido, digite novamente: \n";
		cin >> notaUm;
	}
	
	cout << "Insira a segunda nota:\n";
	cin >> notaDois;
	
	while (notaDois < 0 || notaDois > 10){
		cout << "Voc� inseriu um n�mero inv�lido, digite novamente: \n";
		cin >> notaDois;
	}
	
	cout << "Insira a terceira nota:\n";
	cin >> notaTres;
	
	while (notaTres < 0 || notaTres > 10){
		cout << "Voc� inseriu um n�mero inv�lido, digite novamente: \n";
		cin >> notaTres;
	}
	
	int total = (notaUm + notaDois + notaTres);
	float media = (total/3);
	
	cout << "Sua m�dia foi de " << media;
	
	if (total < 15){
		cout << "\nVoc� foi REPROVADO";
	}else if (total >= 15 && total < 21){
		cout << "\nVoc� ficou de recupera��o";
	}else{
		cout << "\nParab�ns voc� passou";
	}
}
