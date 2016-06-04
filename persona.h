#pragma once
#include <string>

using std::string;

class Person{
	string nombre;
	bool isMacho;
	char colorC [2];
	char colorO [2];
	char colorP [2];
	bool fertil;
 public:
	Person(bool,char[],char[],char[],bool);
	virtual ~Person();
};

const Person operator+(const Person&,const Person&);
const Person operator*(const Person&, const Person&); 



