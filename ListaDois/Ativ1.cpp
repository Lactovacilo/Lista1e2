#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Insira um n�mero inteiro:\n";
	cin >> n;
	
	cout << "\nOs n�meros divis�veis por " << n << " s�o:\n";
	
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			cout << i << " ";
		}
	}
}
