#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	bool primo = true;
	
	cout << "Insira um número e veja se ele é primo:\n";
	cin >> n;
	
	for (int i = 2; i < n; i++){
		if (n % i == 0){
			primo = false;
		}
	}
	
	if (primo == true){
		cout << "O número é primo";
	}else{
		cout << "O número não é primo";
	}
}
