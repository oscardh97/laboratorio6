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
	Person(string, bool,char*,char*,char*,bool);
	Person();
	string toString() const;
	const char* getColorC() const;
	const char* getColorP() const;
	const char* getColorO() const;
	virtual ~Person();
};

const Person operator+(const Person&,const Person&);
const Person operator*(const Person&, const Person&); 



