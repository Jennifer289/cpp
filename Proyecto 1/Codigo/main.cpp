#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int opcion;
    cout<<"\n\t\t********************************\n";
	cout<<"\t\t\tMENU DE JUEGOS\n\n";
	cout<<"\n\t\t********************************\n";
    cout<<"\t\t\t Selecione un juego\n";
    //Mostrar un menu con dos opciones.
    cout<<"1 - starShip" <<endl <<endl;
    cout<<"2 - snake" <<endl <<endl;
    cout<<"Ingrese un numero del menu para seleccionar un juego:";
    cin>>opcion;

    switch(opcion)
{
    case 1:
        starShip();
        break;
    case 2: 
        snake();
        break;
}

    return 0;
}
