#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	bool primo = true;
	
	cout << "Insira um n�mero e veja se ele � primo:\n";
	cin >> n;
	
	for (int i = 2; i < n; i++){
		if (n % i == 0){
			primo = false;
		}
	}
	
	if (primo == true){
		cout << "O n�mero � primo";
	}else{
		cout << "O n�mero n�o � primo";
	}
}
