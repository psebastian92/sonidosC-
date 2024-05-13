#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	const int numeroGanador = 2022; // Se definde un numero constante. Nunca puede cambiar.
	int numeroIngresado, intentos = 3;	
	
	cout<<"Adivina el numero entre 1000 y 9999. \nA ver si acertas. \nTenes 3 intentos."<<endl;
	Sleep(500);
	
	do {
		
		cout<<"Ingrese un numero: "<<endl;
		cin>>numeroIngresado;
		
		while (numeroIngresado > 9999 || numeroIngresado <1000) {
		// Si el usuario ingresó un numero mayor a 9999 o menor a 1000
		// se le vuelve a pedir que ingrese un número válido.
			cout<<"El numero ingresado es incorrecto \nDebe ingresar un numero entre 1000 y 9999: "<<endl;
			cin>>numeroIngresado;
			cout<<endl;
		}
		
		intentos--;
		
		if (numeroIngresado != numeroGanador && intentos > 0) {
			// TONO SIMILAR A SONIDO DE ERROR:
			Beep(180, 100); // Emite un tono de 180 Hz durante 200 milisegundos
			Beep(180, 100); 
			Beep(180, 100); 
			Sleep(400); /* Se coloca un Sleep que sea mayor a la suma de los tiempos anteriores de
							la función Beep (en este caso 100+100+100=300ms), para que se escuchen
							los sonidos antes de que siga el programa.*/
			cout<<"Le erraste. Proba de nuevo. "<<endl;
			cout<<"Te quedan "<<intentos<<" intentos"<<endl<<endl;			
		} 
	
		
		
	} while (numeroIngresado != numeroGanador && intentos > 0);
		
	if (numeroIngresado == numeroGanador) {
			Beep(800, 500); // Sonido de acierto. 800Hz durante 500 milisegundos
			SetConsoleOutputCP(437); // Este comando nos habilita poder usar \x01 para generar la carita feliz
			cout<<"GANASTE!!! \x01"<<endl; 
	} else {
		Beep(180, 1000);
		cout<<"Perdiste :(";
	}
	
	return 0;
}


