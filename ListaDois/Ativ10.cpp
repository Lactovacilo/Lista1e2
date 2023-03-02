#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Insira um número para saber seus divisores:\n";
	cin >> n;
	
	cout << "\nOs números divisíveis são: ";
	
	for (int i = 1; i < 100; i++){
		if (n % i == 0){
			cout << i << " ";
		}
	}
}
