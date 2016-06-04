#include "person.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Person::Person(string nombre,bool isMacho,char colorC[2],char colorO[2],char colorP[2],bool fertil){
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

string Person::toString()const{
	stringstream ss;
	ss << "Person: " << nombre << "Cabello: " << (colorC[0] == 'A' ? "Oscuro" : colorC[0] == 'a' ? "Rubio" : "Blonde" )  
	<< "Ojos: " << (colorO[0] == 'A' ? "Oscuros" :  colorO[0] == 'a' ? "Verdes" : "Azules" )  
	<< "Piel: " << (colorP[0] == 'A' ? "Oscura"  : 	"Blanca");
	return ss.str();
}

// const Person operator+(const Person& lhs, const Person& rhs){
// 	Person retVal(lhs);
// 	retVal += rhs;
// 	return retVal;
// }

// const Person operator*(const Person& lhs, const Person& rhs){
// 	Person retVal(lhs);
// 	retVal *= rhs;
// 	return retVal;
// }
