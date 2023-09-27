#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

void printState(BrazoRobotico rob){
	cout << "**********************************" << endl;
	cout << "Coordenadas: " << rob.getX() << ", " << rob.getY() << ", " << rob.getZ() << endl;
	cout << "Transportando carga: " << (rob.getEstado() == true ? "verdadero" : "falso") << endl;
}

int main(){

	BrazoRobotico ur10(0,0,0,0);
	
	printState(ur10);	
	ur10.mover(0,1,0);
	printState(ur10);
	ur10.mover(1,1,0);
	printState(ur10);
	ur10.coger();
	printState(ur10);
	ur10.mover(1,1,1);
	printState(ur10);
	ur10.soltar();
	printState(ur10);

	return 0;
}
