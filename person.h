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
	Person(string, bool,char[2],char[2],char[2],bool);
	string toString() const;
	virtual ~Person();
};

const Person operator+(const Person&,const Person&);
const Person operator*(const Person&, const Person&); 



