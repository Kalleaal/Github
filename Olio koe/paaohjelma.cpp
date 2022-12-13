#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Henkilo.h"
using namespace std;








int main()
{
	std::vector<Henkilo*> henkilot;

	// Luo kaksi opiskelija-olioita:


	// Luo yksi opettaja-olio:


	// Lis‰‰ luomasi oliot vektoriin:

	for (int i = 0; i < henkilot.size(); i++)
	{
		henkilot[i]->tulosta();
	}

}