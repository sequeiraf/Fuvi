/*
Nombre del archivo: NumerosAleatorios.cpp
Autor:Natalia Sequeira
Lugar: Instituto Tecnológico Victoria
Instrucciones: Generar numeros aleatorios
*/

#include<iostream>
#include<cstdlib> //C Standard Library
#include<ctime>
using namespace std;

int main(){
	srand(time(nullptr));
	int ValorMin = 1, ValorMax = 6;
	 
	
	//Formula para generar números dentro de un rango
	
short dado1=(rand() % (ValorMax - ValorMin + 1))+ ValorMin;
short dado2=(rand() % (ValorMax - ValorMin + 1))+ ValorMin;
cout << dado1 << ","<<dado2;

return 0,
}