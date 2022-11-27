#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ostos
{
public:
		Ostos(string a, int b) : Nimi (a), Kpl(b) {}
		~Ostos(void);
		int haekpl() {return Kpl; }
		string haenimi() { return Nimi; }
		virtual void tulosta() 
		{
			cout << Nimi << " " << Kpl << " " << "kpl." << "\n";


		}

protected:
	string Nimi;
	int Kpl;


};

