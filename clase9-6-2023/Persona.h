#include<iostream>
#include<sstream>

using namespace std;

class Persona {
private:
	string cedula;
	string nombre;
	int edad;
	double peso;
	double estatura;
	string lugar;
public:  // Prototipos....
	Persona();
	Persona(string, string, int, double, double, string);
	virtual ~Persona();
	//Accesores...get´s
	string getCedula();
	string getNombre();
	int    getEdad();
	double getPeso();
	double getEstatura();
	string getLugar();
	//Mutadores...set´s
	void setCedula(string);
	void setNombre(string);
	void setEdad(int);
	void setPeso(double);
	void setEstatura(double);
	void setLugar(string);
	string toString();
};