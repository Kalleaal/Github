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

	void lisaaOstos();

	void listaaOstokset();

	void kirjoitatiedostoon();

	~OstosLista(void);

protected:
	vector<Ostos*>Ostokset;


};

