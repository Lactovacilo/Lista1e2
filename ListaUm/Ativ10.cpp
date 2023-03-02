#include <iostream>
#include <algorithm>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int nUm, nDois, nTres;
	
	cout << "Insira o primeiro número:\n";
	cin >> nUm;
	
	cout << "Insira o segundo número:\n";
	cin >> nDois;
	
	cout << "Insira o terceiro número:\n";
	cin >> nTres;
	
	int n[] = {nUm, nDois, nTres};
	int tamanho = sizeof(n)/sizeof(n[0]);
	sort(n, n + tamanho);
	cout << "\nOrganizado: ";
	for (int i = 0; i < tamanho; i++){
		cout << n[i] << " ";
	}
}
