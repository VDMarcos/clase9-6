#pragma once

#include"Persona.h"

class Selector
{
protected:
	string descripcion;
public:
	Selector(string);
	virtual~Selector();
	virtual bool seleccionar(Persona&) = 0;
	virtual string obtenerDescripcion();
	virtual string reporte() = 0;
	//string toString();
};

