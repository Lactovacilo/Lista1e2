#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233
	
	int n, nUm = 0, nDois = 1, proxT;
	
	cout << "Insira até qual termo você deseja ver a sequência de Fibonnaci:\n";
	cin >> n;
	
	cout << "\nA sequência é: 1 ";
	
	for (int i = 1; i <= n; i++){
		proxT = nUm + nDois;
		nUm = nDois;
		nDois = proxT;
		cout << proxT << " ";
	}
}
