#include "OstosLista.h"
#include <iostream>
#include "Ostos.h"
#include <fstream>
using namespace std;


void OstosLista::aloitaOhjelma()
{
	int valinta;
	do
	{
		cout << "Kauppalista ohjelma\n";
		cout << "(1) Nayta lista \n";
		cout << "(2) Lisaa ostos\n";
		cout << "(3) Tyhjenna lista\n";
		cout << "(0) Lopeta ohjelma\n";
		cin >> valinta;



		switch (valinta)
		{
		case 1:
			listaaOstokset();
			break;

		case 2:
			lisaaOstos();
			break;

		case 3:
			
			break;

		case 0:
			break;

		}

	} while (valinta != 0);

}

void OstosLista::lisaaOstos()
{
	string Nimi;
	int Kpl;

	cin.ignore();
	cout << "Anna tuotteen nimi > ";
	getline(cin, Nimi);
	cout << "Anna Kpl maara > ";
	cin >> Kpl;

	Ostos* lisattavatuote = new Ostos(Nimi,Kpl);
	Ostokset.push_back(lisattavatuote);

}

void OstosLista::listaaOstokset()
{
	int koko = Ostokset.size();

	cout << "--------------------------------\n";
	cout << "Listallasi olevat tuotteet:\n";

	for (int i = 0; i < koko; i++)
	{
		Ostokset[i]->tulosta();
	}


}

void OstosLista::kirjoitatiedostoon()
{


}

void OstosLista::luetiedosto()
{
}

OstosLista::~OstosLista(void)
{

}

void Ostos::tulosta()
{
	std::cout << "Nimi:" << Nimi << std::endl;
	std::cout << "Maara: " << Kpl << "\n\n";
}