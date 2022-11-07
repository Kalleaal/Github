#include "Tuote.h"
#include "Kauppa.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	setlocale(LC_ALL, "");

	Tuote t1("Banaani", 1, 0.50);
	Tuote t2("Kumipallo", 13, 1);
	Tuote t3("Galja", 3, 5);
	Tuote t4("Keissi", 3, 19);
	Tuote t5("Peruna", 2, 0.2);
	Tuote t6("Porkkana", 2, 0.3);
	Tuote t7("Makarooni", 4, 0.8);
	Tuote t8("Sipuli", 5, 0.1);
	Tuote t9("Jauhenliha", 6, 6);



	t1.tulosta();
	t2.tulosta();
	t3.tulosta();
	t4.tulosta();
	t5.tulosta();
	t6.tulosta();
	t7.tulosta();
	t8.tulosta();
	t9.tulosta();


	Kauppa Kauppa("Siwa", "K-Kauppa");

	Kauppa.aloitaOhjelma();
}