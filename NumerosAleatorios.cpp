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
//long TiempoTranscurrido = time(nullptr); //1 Ener0 1970
	srand(time(nullptr));
	int aleatorio = rand() % 10;
	int num;
	
	cout << "Adivine un numero entre 0 y 10";
	cin >> num;
	
	if(num == aleatorio){
		cout <<"Felicidades, lo acertaste";
	} else {
		cout <<"Lo siento, no acertaste";
	}
	
	cout << aleatorio; 
	return 0;
}