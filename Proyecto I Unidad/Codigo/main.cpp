#include <iostream>
#include "startShip.h"
#include "snake.h"
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
	int opcion = 0;
	
	while(true)
	{
		system("cls");
		
		cout << "****************************" << endl;
		cout << "BIENVENIDO AL MENU DE JUEGOS" << endl;
		cout << "****************************\n" << endl;
		
		cout << "Selecione un juego" << endl;
		cout << "1 - startShip" << endl;
		cout << "2 - snake" << endl;
		cout << "\n";
		
		cout << "Ingrese un numero del menu para seleccionar un juego: ";
		cin >> opcion;
		
		switch(opcion)
		{
			case 1:
				system ("cls");
				starShip();
				break;
			case 2:
				system ("cls");
				snake();
				break;
		}
		
	}
    return 0;
}


