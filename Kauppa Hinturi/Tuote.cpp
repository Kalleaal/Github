#include "Tuote.h"
#include <iostream>
using namespace std;

Tuote::Tuote(string n, int k, float s)
{
	nimi = n;
	id = k;
	hinta = s;

}

Tuote::~Tuote(void)
{
}

void Tuote::tulosta()
{
	std::cout << "Nimi:       " << nimi << std::endl;
	std::cout << "ID Tunnus: " << id << std::endl;
	std::cout << "Hinta:  " << hinta << " Euroa\n\n";
}

void Tuote::Alelaskuri()
{
	hinta = hinta * 0.50;
	



}