#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int mes;
	
	cout << "\nInsira um n�mero de 1 a 12 para saber o m�s correspondente: \n";
	cin >> mes;
	
	switch(mes){
		case 1:
			cout << "\nJaneiro";
			break;
		case 2:
			cout << "\nFevereiro";
			break;
		case 3:
			cout << "\nMar�o";
			break;
		case 4:
			cout << "\nAbril";
			break;
		case 5:
			cout << "\nMaio";
			break;
		case 6:
			cout << "\nJunho";
			break;
		case 7:
			cout << "\nJulho";
			break;
		case 8:
			cout << "\nAgosto";
			break;
		case 9:
			cout << "\nSetembro";
			break;
		case 10:
			cout << "\nOutubro";
			break;
		case 11:
			cout << "\nNovembro";
			break;
		case 12:
			cout << "\nDezembro";
			break;
		default:
			cout << "O n�mero que voc� inseriu � inv�lido";
	}
}
