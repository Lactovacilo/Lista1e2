#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	string nome;
	int salario, salarioaumentado;
	
	cout << "Insira seu nome (Tudo junto):\n";
	cin >> nome;
	
	cout << "Insira seu sal�rio:\n";
	cin >> salario;
	
	if (salario <= 1500){
		salarioaumentado = (salario * 1.1);
		cout << "\nO aumento foi de 10%";
	}else {
		salarioaumentado = (salario * 1.05);
		cout << "\nO aumento foi de 5%";
	}
	
	cout << "\n\nSal�rio antigo: " << salario;
	cout << "\nSal�rio novo: " << salarioaumentado;
	cout << "\nA diferen�a de sal�rio foi de: " << (salarioaumentado - salario);
}
