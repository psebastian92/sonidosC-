#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <ctime> // Incluye la biblioteca para obtener el tiempo actual

using namespace std;

int main() {

	int opcionIngresada;
	int tonoGenerado [3];
	int tonoRandom [3];
	int posicionRandom [3];
	int contadorTonos = 0;
	int posicionAleatoriaArray;
	boolean perdio = false;
	
	// Inicializa el generador de números pseudoaleatorios con una semilla diferente basada en el tiempo actual
    srand(time(NULL));
	
	cout<<"Escucha los tres tonos, y luego presiona el boton correspondiente al tono."<<endl;
	cout<<"1. Primer tono."<<endl;
	cout<<"2. Segundo tono."<<endl;
	cout<<"3. Tercer tono."<<endl;
	cout<<"------------------------------------------"<<endl;
	Sleep(3000);
	
	for (int i = 0; i < 3; i++ ) {
			tonoGenerado[i] = 100 + ( rand() % 1000);
			Sleep(1000);
			cout<<"Tono numero: "<< i+1 <<endl;
			Beep(tonoGenerado[i], 1000);
	}
	
	while ( perdio == false  ) {
		if (contadorTonos == 0) {
			cout<<"\nComienza el juego!!!"<<endl;
			cout<<"------------------------------------------"<<endl;
			Sleep(2000);
		} 
		else {
			Sleep (2000);
			cout<<"------------------------------------------"<<endl;
			cout<<"\nMuy bien! Siguiente patron: "<<endl;
		}
		
		for (int i = 0; i < 3; i++ ) {
			posicionAleatoriaArray = rand() % 3 ;
			posicionRandom [i] = posicionAleatoriaArray;
			Beep (tonoGenerado[posicionAleatoriaArray] , 500);
			tonoRandom [i] = tonoGenerado[posicionAleatoriaArray] ;
			Sleep(1000);
		}
		
		for (int i = 0; i < 3; i++ ) {
			cout<<"Ingresa una opcion: ";
			cin>>opcionIngresada;
			cout<< opcionIngresada << endl;
			Beep (tonoGenerado[opcionIngresada - 1] , 1000);

			
			if ( tonoGenerado[opcionIngresada - 1] != tonoRandom[i] ) {
				cout<<"Perdiste :("<<endl;
				cout<<"La secuencia era: ";
				for (int i = 0; i<3 ; i++) {
					cout<<	posicionRandom [i] + 1 << " ";
				}
				cout<<"\n------------------------------------------"<<endl;
				perdio = true;
				break;
			} 
				
		}
		
			contadorTonos ++;
	}

		cout<<"Lo intentaste "<<contadorTonos << " veces."<<endl;

	return 0;
}
