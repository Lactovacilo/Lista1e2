#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Insira um número inteiro:\n";
	cin >> n;
	
	cout << "\nOs números divisíveis por " << n << " são:\n";
	
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			cout << i << " ";
		}
	}
}
