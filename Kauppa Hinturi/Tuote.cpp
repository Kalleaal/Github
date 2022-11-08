#include "Tuote.h"
#include <iostream>
using namespace std;

Tuote::Tuote(string n, int k, float s)
//	:nimi(n),id(k),hinta(s) -Vaihtoehtoinen tapa.
{
	nimi = n;
	id = k;
	hinta = s;

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

