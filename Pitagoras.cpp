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
	
	Hipotenusa = sqrt( (pow)Cateto1,2) + pow(Cateto2,2));
	
	cout << "Cateto 1 = " <<Cateto1 << endl;
	cout << "Cateto 2 = " <<Cateto2 <<endl;
	cout << "Hipotenusa = " <<Hipotenusa <<endl;
}