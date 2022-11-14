#include "Tuote.h"
#include "Kauppa.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	setlocale(LC_ALL, "");

	Kauppa Kauppa("Siwa", "K-Kauppa");

	Kauppa.aloitaOhjelma();



	Tuote tuote1("Geisha suklaa", 1.99, 1);
	Tuote Roopensukka("Haiseva sukka");
	Tuote tyhj‰Tuote;
	Tuote Suklaa = tuote1;

	
	tuote1.tulosta();
	Roopensukka.tulosta();
	tyhj‰Tuote.tulosta();
	Suklaa.tulosta();





}