#include"Rep1.h"
#include"ContenedorPer.h"

int main() {
	Persona* per1 = new Persona("1111", "Marcos", 20, 67, 1.70, "Alajuela");
	Persona* per2 = new Persona("1111", "Marcos", 10, 67, 1.70, "Alajuela");
	Selector* selector1 = new Rep1(10, 25);
	ContenedorPer* nuevo = new ContenedorPer(10);

	nuevo->agregarPersona(per1);
	nuevo->agregarPersona(per2);
	cout<<nuevo->reporteSelector(selector1);

	system("pause");

	return 0;
}