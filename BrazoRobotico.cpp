#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando){
	this->x = x;
	this->y = y;
	this->z = z;
	this->sujetando = sujetando;
}

double BrazoRobotico::getX(){return this->x;}
double BrazoRobotico::getY(){return this->y;}
double BrazoRobotico::getZ(){return this->z;}
bool BrazoRobotico::getEstado(){return this->sujetando;}

void BrazoRobotico::coger(){this->sujetando = true;}
void BrazoRobotico::soltar(){this->sujetando = false;}
void BrazoRobotico::mover(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}
