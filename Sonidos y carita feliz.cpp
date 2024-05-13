#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	// TONO SIMILAR A SONIDO DE ERROR:
	Beep(180, 100); // Emite un tono de 180 Hz durante 200 milisegundos
	Beep(180, 100); 
	Beep(180, 100); 
	Sleep(400); /* Se coloca un Sleep que sea mayor a la suma de los tiempos anteriores de
							la función Beep (en este caso 100+100+100=300ms), para que se escuchen
							los sonidos antes de que siga el programa.*/
	cout<<"Acaba de escucharse un sonido parecido al de ERROR."<<endl;
	
	Sleep(3000); //Esperamos tres segundos para escuchar el siguiente sonido.
	
	// TONO SIMILAR A SONIDO DE ERROR (pero de mayor duración):
	Beep(180, 1000); // Emite un tono de 180 Hz durante 1000ms (1 segundo).
	cout<<"Acaba de escucharse un sonido parecido al de ERROR, pero mas largo."<<endl;
	/*---------------------------------------------------------------*/
	
	Sleep(3000); //Esperamos tres segundos para escuchar el siguiente sonido.
	
	// TONO SIMILAR AL ACIERTO.
	Beep(800, 500); // 800Hz durante 500 milisegundos
		cout<<"Acaba de escucharse un sonido parecido al de ACIERTO."<<endl;
	/*---------------------------------------------------------------*/
	
	Sleep(3000); //Esperamos tres segundos para mostrar en pantalla la frase final con la carita feliz.
		
	SetConsoleOutputCP(437); // Este comando nos habilita poder usar \x01 para generar la carita feliz
	cout<<"Programa finalizado \x01"<<endl; // \x01 es la carita feliz. Necesitamos la línea anterior para generarla.
	
	/*---------------------------------------------------------------*/
	
	return 0;
}
