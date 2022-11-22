#include "Ostos.h"
#include <string>
using namespace std;

Ostos::Ostos(string a, int b)
:Nimi(a),Kpl(b)
{
}

Ostos::~Ostos(void)
{
}

int Ostos::haekpl()
{
	return Kpl;
}

string Ostos::haenimi()
{
	return Nimi;
}

