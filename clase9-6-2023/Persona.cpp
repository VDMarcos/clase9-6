#include"Persona.h"

Persona::Persona() {  // Constructor Predeterminado..
	cedula = "";
	nombre = "";
	edad = 0;
}

Persona::Persona(string ce, string no, int ed, double pe, double est, string lug) {
	cedula = ce;
	nombre = no;
	edad = ed;
	peso = pe;
	estatura = est;
	lugar = lug;
}

Persona::~Persona() {
}

//Accesores...get´s
string Persona::getCedula() { return cedula; }
string Persona::getNombre() { return nombre; }
int    Persona::getEdad() { return edad; }

double Persona::getPeso() { return peso; }
double Persona::getEstatura() { return estatura; }
string Persona::getLugar() { return lugar; }


//Mutadores...set´s
void Persona::setCedula(string ce) { cedula = ce; }
void Persona::setNombre(string no) { nombre = no; }
void Persona::setEdad(int ed) { edad = ed; }

void Persona::setPeso(double pe) { peso = pe; }
void Persona::setEstatura(double est) { estatura = est; }
void Persona::setLugar(string lug) { lugar = lug; }

string Persona::toString() {
	stringstream s;
	s << "Cedula...." << cedula << endl
		<< "Nombre...." << nombre << endl
		<< "Edad......" << edad << endl
		<< "Peso......" << peso << endl
		<< "Estatura..." << estatura << endl
		<< "Lugar......" << lugar << endl << endl;
	return s.str();
}