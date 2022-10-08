#include <iostream>

/* 
PRACTICA #1. OPERANDO VALORES
	- Realizar un programa que le pida al usuario dos valores numéricos(de tipo double) y que al ingresar
	los valores se realice la suma, resta, multiplicación y división de estos dos valores. 
*/

using namespace std;
int main(int argc, char** argv) {
	double numero1;
	double numero2;
	double suma;
	double resta;
	double multiplicacion;
	double division;
	
	cout<<"BIENVENIDO A LA PRACTICA 1"<<endl<<endl;
	
	cout<<"Ingresa el primer numero a operar: ";
	cin>>numero1;
	cout<<"Ingresa el segundo numero a operar: ";
	cin>>numero2;
	
	cout<<endl<<"El primer numero ingresado fue: "<<numero1<<" ,y el segundo numero ingresado fue: "<<numero2<<endl;
	
	// -------------------------------------------------- OPERACIONES
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	cout<<endl;
	cout<<numero1<<" + "<<numero2<<" = "<<suma<<endl;
	cout<<numero1<<" - "<<numero2<<" = "<<resta<<endl;
	cout<<numero1<<" * "<<numero2<<" = "<<multiplicacion<<endl;
	cout<<numero1<<" / "<<numero2<<" = "<<division<<endl;
	
	return 0;
}