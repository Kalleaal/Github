#pragma once
#include <string>
using namespace std;

class Ostos
{
public:
		Ostos(string a, int b);
		~Ostos(void);
		int haekpl();
		string haenimi();
		virtual void tulosta();

protected:
	string Nimi;
	int Kpl;


};

