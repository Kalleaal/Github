#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;




class Henkilo {
public:
	Henkilo(std::string n) : nimi(n) {}
	virtual void tulosta() { /* t�m�n metodin toteutus on tyhj�*/ }
protected:
	std::string nimi;

};
