#include "ContenedorPer.h"

ContenedorPer::ContenedorPer(int n)
{
    tam = n;
    can = 0;
    vec = new Persona * [tam];
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
        vec[can++] = per;
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

string ContenedorPer::reporteSelector(Selector* sel)
{
    selector = sel;
    ContenedorPer* vecN = new ContenedorPer(20);
    for (int i = 0; i < can; i++) {
        if (sel->seleccionar(*vec[i]))
            vecN->agregarPersona(vec[i]);
    }
    stringstream s;
    s << vecN->toString() << endl;
    return s.str();
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
