#include "Tuote.h"
#include <iostream>
using namespace std;

Tuote::Tuote(string x, int y, float z)
//	:nimi(n),id(k),hinta(s) -Vaihtoehtoinen tapa.
{
	nimi = x;
	id = y;
	hinta = z;

}

Tuote::~Tuote(void)
{
}

float Tuote::haehinta()
{
	return hinta;
}

void Tuote::asetaHinta(float h)
{
	if (h > 0)
	{
		hinta = h;
	}
}



void Tuote::tulosta()
{
	std::cout << "Nimi:" << nimi << std::endl;
	std::cout << "ID Tunnus: " << id << std::endl;
	std::cout << "Hinta:  " << hinta << " Euroa\n\n";
}

void Tuote::alennettu(float alepros)
{
	hinta -= (hinta / 100) * alepros;
}

Tuote::Tuote(const Tuote& tuote)
{
	nimi = tuote.nimi;
	hinta = tuote.hinta;
	id = tuote.id;
}


Tuote::Tuote(string x)
	: nimi(x), id(0.0), hinta(0)
{


}

Tuote::Tuote()
{
	nimi = "tyhjätuote";
	id = 0;
	hinta = 0.0;
}
