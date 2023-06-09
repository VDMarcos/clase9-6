#include "Rep1.h"

Rep1::Rep1(int mi, int ma) : Selector("Selector de edad"), min(mi), max(ma) {}

Rep1::~Rep1(){}

bool Rep1::seleccionar(Persona& per)
{
	if (min == per.getEdad()) {
		return true;
	}
	else if (max == per.getEdad()) {
		return true;
	}
	else {
		return false;
	}
}
