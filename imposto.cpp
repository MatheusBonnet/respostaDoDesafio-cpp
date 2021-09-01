#include <iostream>

using namespace std;

int main(){
	
	float salario = 0;
	float resultado = 0;
	
	cout << "Digite seu  salario: ";
	cin >> salario;
	
	if(salario >= 1900){
		resultado = salario * 0.02;
		cout << "O valor do imposto e de " << resultado << " reais";
	}
	
	else if(salario >= 2500){
		resultado = salario * 0.03;
		cout << "O valor do imposto e de " << resultado << " reais";
	}
	
	else if(salario >= 3700){
		resultado = salario * 0.045;
		cout << "O valor do imposto e de " << resultado << " reais" ;
	}
	
	else if(salario >= 5000){
		resultado = salario * 0.06;
		cout << "O valor do imposto e de " << resultado << " reais";
	}
	
	else{
		cout << "Nao e necessario pagar imposto!!!";
	}
	
	return 0;
