/*
Nombre del archivo: Plantilla.cpp
Autor:Natalia Sequeira
Lugar: Instituto Tecnológico Victoria
Instrucciones: Ejemplo biblioteca cmath
*/

#include<iostream>
#include<cmath>

using namespace std;
int main(){
	double Cateto1,Cateto2,Hipotenusa;
	cout <<"Ingrese el cateto 1: ";
	cin >> Cateto1;
	cout <<"Ingrese el cateto 2: ";
	cin >> Cateto2;
	
	hipotenusa = sqrt( (pow)cateto1,2) + pow(cateto2,2));
	
	cout << "Cateto 1 = " <<Cateto1 << endl;
	cout << "Cateto 2 = " <<Cateto2 <<endl;
	cout << "Hipotenusa = " <<Hipotenusa <<endl;
}