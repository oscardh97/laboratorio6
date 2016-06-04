#include "person.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
using std::string;
using std::stringstream;
using std:: endl;

Person::Person(){}
Person::Person(string nombre,bool isMacho,char* colorC,char* colorO,char* colorP,bool fertil){
	this->nombre = nombre;
	this->isMacho = isMacho;
	this->colorC[0] = colorC[0];
	this->colorC[1] = colorC[1];
	this->colorO[0] = colorO[0];
	this->colorO[1] = colorO[1];
	this->colorP[0] = colorP[0];
	this->colorP[1] = colorP[1];
	this->fertil = fertil;
}
Person::~Person(){
}
const char* Person::getColorC() const{
	return this->colorC;
}
const char* Person::getColorO() const{
	return this->colorO;
}
const char* Person::getColorP() const{
	return this->colorP;
}
string Person::toString()const{
	stringstream ss;
	ss << nombre << endl << "\tCabello: " << (colorC[0] == 'A' ? "Oscuro" : colorC[0] == 'a' ? "Rubio" : "Blonde" ) << endl  
	<< "\tOjos: " << (colorO[0] == 'A' ? "Oscuros" :  colorO[0] == 'a' ? "Verdes" : "Azules" ) << endl  
	<< "\tPiel: " << (colorP[0] == 'A' ? "Oscura"  : 	"Blanca") << endl;
	return ss.str();
}
char* calcularProbabilidad(const char gen1[2], const char gen2[2]){
	srand(time(NULL));
	char* genes = new char[4];
	char* nuevosGenes = new char[2];
	genes[0] = gen1[0];
	genes[1] = gen1[1];
	genes[2] = gen2[0];
	genes[3] = gen2[1];
	int numRand = rand() % 3;
	nuevosGenes[0] = genes[numRand];
	if(numRand <= 1){
		numRand = 2 + rand() % 3;
	}else{
		numRand = rand() % 1;
	}
	nuevosGenes[1] = genes[numRand];
	return nuevosGenes;

}
const Person operator+(const Person& lhs, const Person& rhs){
	int puedeTener = rand() % 100 + 1;
	if(puedeTener >= 21){
		return Person();
	}
	char* nuevoCabello = calcularProbabilidad(lhs.getColorC(), rhs.getColorC());
	char* nuevaPiel = calcularProbabilidad(lhs.getColorP(), rhs.getColorP());
	char* nuevosOjos = calcularProbabilidad(lhs.getColorO(), rhs.getColorO());
	int esMacho = rand() % 1;
	int fertil = rand() % 1;
	string nombre = "BASTARDO";
	return Person(nombre, esMacho, nuevoCabello, nuevosOjos, nuevaPiel, fertil);
}

const Person operator*(const Person& lhs, const Person& rhs){
	int puedeTener = rand() % 100 + 1;
	if(puedeTener == 1){
		return lhs + rhs;
	}
	return Person();
}
