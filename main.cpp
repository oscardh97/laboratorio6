#include <iostream>
#include "person.h"
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	vector <Person*> personList;
	do{
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
			ojos[1] = ojos[0];
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
		}else if (opcion == 2){
			int pos;
			for (int i=0; i<personList.size(); i++){
				cout << i << " " << personList[i]->toString() << endl;
			}
			cout << "Ingrese La Posicion A Borrar: " << endl;
			cin >> pos;
			personList.erase(personList.begin()+pos);
			for (int i=0; i<personList.size(); i++){
	                        cout << i << " " << personList[i]->toString() << endl;
	                }  
			cout << " Persona Borrada!" << endl;
				
		}else if(opcion == 3){
			int pos1;
			int pos2;
			Person nuevaP;
			for (int i=0; i<personList.size(); i++){
                                cout << i << " " << personList[i]->toString() << endl;
                        }
			cout << "Ingrese El Indice De La Primera Persona: " << endl;
			cin >> pos1;
			cout << "Ingrese El Indice De La Segunda Persona: " << endl;
			cin >> pos2;
			cout << "Desea Usar Condon? Si.1 No.0" << endl;
			bool condon;
			cin >> condon;
			if(condon){
				nuevaP = *(personList[pos1]) * *(personList[pos2]);
			}else{
				nuevaP = *(personList[pos1]) + *(personList[pos2]);
			}
			if(nuevaP.getNombre() == ""){
				cout << "No Salio Embarazada" << endl;
			}
			else{
				cout << "Salio Preñada" << endl;
				personList.push_back(&nuevaP);	
				cout << "Nueva Persona" << nuevaP.toString();
			}

		}
	}while(1);
	return 0;
}
