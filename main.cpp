#include <iostream>
#include "person.h"
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	vector <Person*> personList;
	cout << "1.-\t Agregar Persona" << endl;
	cout << "2.-\t Eliminar Persona" << endl;
	cout << "3.-\t Hacer Sexo" << endl;
	cout << "Ingrese una opcion" << endl;
	int opcion;
	cin >> opcion;
	if (opcion == 1){
		string nombre;
		bool esMacho, fertil;
		// Nombre, genero, pelo, ojos, color de piel, fertil
		cout << "Ingrese el maldito nombre: " << endl;
		cin >> nombre;
		cout << "¿Es macho?: 1/0" << endl;
		cin >> esMacho;
		cout << "Color de Pelo: " << endl;
		cout << "\t1.-\tOscuro" << endl;
		cout << "\t2.-\tRubio" << endl;
		cout << "\t3.-\tPelirojo" << endl;
		int opcionAlter;
		cin >> opcionAlter;
		char pelo[2];
		pelo[0] = opcionAlter == 1 ? 'A' : opcionAlter == 2 ? 'a' : 'b';
		pelo[1] = pelo[0];
		cout << pelo << endl;
		cout << "Color de Ojos: " << endl;
		cout << "\t1.-\tOscuro" << endl;
		cout << "\t2.-\tVerdes" << endl;
		cout << "\t3.-\tAzules" << endl;
		cin >> opcionAlter;
		char ojos[2];
		ojos[0] = opcionAlter == 1 ? 'A' : opcionAlter == 2 ? 'a' : 'b';
		ojos[0] = ojos[1];
		cout << "Color de piel: " << endl;
		cout << "\t1.-\tOscuro" << endl;
		cout << "\t2.-\tBlanca" << endl;
		char piel[2];
		cin >> opcionAlter;
		piel[0] = opcionAlter == 1 ? 'A' : 'a';
		piel[1] = piel[0];
		cout << "¿Es fertil?: 1/0" << endl;
		cin >> fertil;
		personList.push_back(new Person(nombre, esMacho, pelo, ojos, piel, fertil));
		cout << personList[0]->toString() << endl;
	}
	return 0;
}