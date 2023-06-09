#pragma once

#include"Selector.h"

class ContenedorPer : public Persona
{
private:
	Persona **vec;
	int tam;
	int can;
	Selector* selector;
public:
	ContenedorPer(int);
	virtual~ContenedorPer();
	bool agregarPersona(Persona*);
	int getTam();
	int getCant();
	string reporteSelector(Selector*);
	string toString();
};

