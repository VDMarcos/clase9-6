#include "Selector.h"

Selector::Selector(string des)
{
	descripcion = des;
}

Selector::~Selector()
{
}

string Selector::obtenerDescripcion()
{
	return descripcion;
}
