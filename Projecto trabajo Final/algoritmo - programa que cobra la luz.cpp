#ifdef __MSDOS__
	#include <iostream.h>
	#include <stdlib.h>
#else
	#include <iostream>
	#include <cstdlib>
	using namespace std;
#endif
#include <conio.h>

int main (void)
{
	float consumo_en_kvh, monto_a_pagar;
	char nombre[63], codigo[63];
	char tecla_repetir;
	do {
		system ("cls");
		cout << "Ingrese el nombre: ";
		cin.get (nombre, sizeof (nombre), '\n');
		cin.get ();
		cout << "Ingrese el codigo: ";
		cin.get (codigo, sizeof (codigo), '\n');
		cin.get ();
		cout << "Ingrese el valor de consumo en kvh: ";
		cin >> consumo_en_kvh;
		cin.get ();
		monto_a_pagar=0;
		if(consumo_en_kvh<140)
			monto_a_pagar=consumo_en_kvh*3.2;
		if(consumo_en_kvh>=140&&consumo_en_kvh<=310)
			monto_a_pagar=140.0*3.2+(consumo_en_kvh-140)*0.15;
		if(consumo_en_kvh>310)
			monto_a_pagar=140.0*3.2+170*0.15(consumo_en_kvh-310)*0.097;
		cout << "nombre: " << nombre << endl;
		cout << "codigo: " << codigo << endl;
		cout << "Valor de monto a pagar: " << monto_a_pagar << endl;
		cout << endl;
		cout << "\250Desea repetir el proceso? (S/N): ";
		do {
			tecla_repetir = getch();
		} while (tecla_repetir!='s' && tecla_repetir!='n' && tecla_repetir!='S' && tecla_repetir!='N');
	} while (tecla_repetir=='s' || tecla_repetir=='S');
	return EXIT_SUCCESS;
}
