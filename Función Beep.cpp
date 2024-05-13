/* 
FUNCIÓN BEEP
Es una función que emite sonidos de windows. 
Se escribe así:

Beep ( frecuencia del sonido , duración del sonido en mili segundos) 
Ejemplo: Beep (180,100) -> 180Hz (frecuencia) y 100 mili segundos.

*/

#include <iostream>
#include <windows.h> // Para usar la función Beep

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
	
	return 0;
}
