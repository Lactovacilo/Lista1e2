#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Insira um n�mero para saber seus divisores:\n";
	cin >> n;
	
	cout << "\nOs n�meros divis�veis s�o: ";
	
	for (int i = 1; i < 100; i++){
		if (n % i == 0){
			cout << i << " ";
		}
	}
}
