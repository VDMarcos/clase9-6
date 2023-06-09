#pragma once

#include "Persona.h"
#include"Selector.h"

class ContenedorPer : public Persona
{
private:
	Persona **vec;
	int tam;
	int can;
public:
	ContenedorPer(int);
	virtual~ContenedorPer();
	bool agregarPersona(Persona*);
	int getTam();
	int getCant();
	string toString();
};

