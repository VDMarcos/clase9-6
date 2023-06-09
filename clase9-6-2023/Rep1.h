#pragma once

#include"Selector.h"

class Rep1 : public Selector       //selectro edad...
{
private:
	int min;
	int max;
public:
	Rep1(int, int);
	virtual~Rep1();
	virtual bool seleccionar(Persona&);
	string toString();
};

