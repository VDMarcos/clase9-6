#include "ContenedorPer.h"

ContenedorPer::ContenedorPer(int n)
{
    tam = n;
    can = 0;
    for (int i = 0; i < tam; i++) {
        vec[i] = nullptr;
    }
}

ContenedorPer::~ContenedorPer()
{
    for (int i = 0; i < can; i++) {
       delete vec[i];
    }
    delete[] vec;
}

bool ContenedorPer::agregarPersona(Persona* per)
{
    if (can < tam) {
        vec[can++] == per;
        return true;
    }
    else {
        return false;
    }
}

int ContenedorPer::getTam()
{
    return tam;
}

int ContenedorPer::getCant()
{
    return can;
}

string ContenedorPer::toString()
{
    stringstream s;
    s << "--------------------------CONTENEDOR INFORMACION------------------------------" << endl;
    for (int i = 0; i < can; i++) {
        s << vec[i]->toString() << endl;
    }
    s << "-------------------------------------------------------------------------------" << endl;
    return s.str();
}
