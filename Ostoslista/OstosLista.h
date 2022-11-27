#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Ostos.h"
using namespace std;




class OstosLista
{
public:
	void aloitaOhjelma();

	void lisaaOstos(); //lis‰‰uusi

	void listaaOstokset(); //Tulosta

	void kirjoitatiedostoon();

	void luetiedosto();

	~OstosLista(void);

protected:
	vector<Ostos*>Ostokset;


};

