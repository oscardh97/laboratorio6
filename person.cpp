#include "person.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Person::Person(string nombre,bool isMacho,char[] colorC,char[]colorO,colorP,bool fertil):nombre(nombre),isMacho(isMacho),colorC(colorC),colorO(colorO),colorP(colorP),fertil(fertil){
}
Person::~Person(){
}

string Person::toString()const{
	stringstream ss;
	ss << "Person: " << name << "Cabello: " << (colorC[0] == 'A' ? "Oscuro" : colorC[0] == 'a' ? "Rubio" : "Blonde" )  
	<< "Ojos: " << (colorO[0] == 'A' ? "Oscuros" :  colorO[0] == 'a' ? "Verdes" : "Azules" )  
	<< "Piel: " << (colorP[0] == 'A' ? "Oscura"  : 	"Blanca");
	return ss.str();
}

const Person operator+(const Person& lhs, const Person& rhs){
	Person retVal(lhs);
	retVal += rhs;
	return retVal;
}

const Person operator*(const Person& lhs, const Person& rhs){
	Person retVal(lhs);
	retVal *= rhs;
	return retVal;
}
