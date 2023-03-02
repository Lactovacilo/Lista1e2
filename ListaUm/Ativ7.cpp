#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	string nome;
	int salario, salarioaumentado;
	
	cout << "Insira seu nome (Tudo junto):\n";
	cin >> nome;
	
	cout << "Insira seu salário:\n";
	cin >> salario;
	
	if (salario <= 1500){
		salarioaumentado = (salario * 1.1);
		cout << "\nO aumento foi de 10%";
	}else {
		salarioaumentado = (salario * 1.05);
		cout << "\nO aumento foi de 5%";
	}
	
	cout << "\n\nSalário antigo: " << salario;
	cout << "\nSalário novo: " << salarioaumentado;
	cout << "\nA diferença de salário foi de: " << (salarioaumentado - salario);
}
