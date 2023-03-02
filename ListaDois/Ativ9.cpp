#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int nTabuada, limTab;
	
	cout << "Digite um número:\n";
	cin >> nTabuada;
	
	cout << "\nDigite o limite de multiplicação da tabuada:\n";
	cin >> limTab;
	
	for (int i = 0; i <= limTab; i++){
		cout << nTabuada << " x " << i << " = " << (nTabuada*i) << "\n";
	}
}
