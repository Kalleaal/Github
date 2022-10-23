#include "Kirja.h"
#include <iostream>

Kirja::Kirja(std::string n, std::string k, int s)
{

	nimi = n;
	kirjailija = k;
	sivut = s;



}

Kirja::~Kirja(void)
{
	std::cout << "destruktori: " << nimi << "\n";

}

void Kirja::tulosta()
{
	std::cout << "Nimi:       " << nimi << std::endl;
	std::cout << "Kirjailija: " << kirjailija << std::endl;
	std::cout << "Sivumäärä:  " << sivut << std::endl;
}
