#pragma once

#include"Selector.h"

class Rep2 : public Selector   //selector de lugar...
{
private:
	string lugar;
public:
	Rep2(string);
	virtual~Rep2();
	virtual bool seleccionar(Persona&);
};

