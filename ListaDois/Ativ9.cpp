#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int nTabuada, limTab;
	
	cout << "Digite um n�mero:\n";
	cin >> nTabuada;
	
	cout << "\nDigite o limite de multiplica��o da tabuada:\n";
	cin >> limTab;
	
	for (int i = 0; i <= limTab; i++){
		cout << nTabuada << " x " << i << " = " << (nTabuada*i) << "\n";
	}
}
