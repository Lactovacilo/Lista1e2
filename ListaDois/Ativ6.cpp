#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233
	
	int n, nUm = 0, nDois = 1, proxT;
	
	cout << "Insira at� qual termo voc� deseja ver a sequ�ncia de Fibonnaci:\n";
	cin >> n;
	
	cout << "\nA sequ�ncia �: 1 ";
	
	for (int i = 1; i <= n; i++){
		proxT = nUm + nDois;
		nUm = nDois;
		nDois = proxT;
		cout << proxT << " ";
	}
}
