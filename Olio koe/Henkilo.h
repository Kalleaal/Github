#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;




class Henkilo {
public:
	Henkilo(std::string n) : nimi(n) {}
	virtual void tulosta() { /* tämän metodin toteutus on tyhjä*/ }
protected:
	std::string nimi;

};
