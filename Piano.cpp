#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	int opcionIngresada;
	
	
	for (int tonosPulsados = 0; tonosPulsados<100; tonosPulsados++) {
		cout<<"Presione numeros del 1 al 5 para generar sonido:"<<endl;
		cin>>opcionIngresada;
		
			switch ( opcionIngresada ){
				case 1: Beep (200,200);
				break;
				case 2: Beep (400,200);
				break;
				case 3: Beep (600,200);
				break;
				case 4: Beep (800,200);
				break;
				case 5: Beep (1000,200);
				break;
				default: cout<<"Opcion incorrecta. Pulsa de nuevo"<<endl;
				break;
			}
	}

	return 0;
}
