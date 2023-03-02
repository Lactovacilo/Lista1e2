#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Insira um número para saber seus fatores primos:\n";
	cin >> n;
	
	for (int i = 2; i <= n; i++){
		while (n % i == 0){
			n /= i;
			cout << i << " ";	
		}
	}
}
