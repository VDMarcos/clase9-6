#include "Rep2.h"

Rep2::Rep2(string lug) : Selector("Selector de lugar"), lugar(lug) {}

Rep2::~Rep2(){}

bool Rep2::seleccionar(Persona&)
{
	return false;
}
