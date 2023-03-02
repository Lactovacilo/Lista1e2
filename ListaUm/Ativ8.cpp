#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int dias, cigarros;
	
	cout << "A quantos dias você fuma?\n";
	cin >> dias;
	
	cout << "\nQuantos cigarros você fuma por dia?\n";
	cin >> cigarros;
	
	int minutos = (dias*cigarros*10);
	int horas = (minutos/60);
	int diastempo = (horas/24);
	
	cout << "\nVocê já perdeu " << diastempo << " dias, " << (horas % 24) << " horas e " << (minutos % 60) << " minutos.";
}
