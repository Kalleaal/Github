#include "Kauppa.h"
#include "Tuote.h"
#include <iostream>
#include <string>
using namespace std;

Kauppa::Kauppa(string nimi_, string osoite_)
{
	nimi = nimi_;
	osoite = osoite_;

	Tuote t1("Banaani", 1, 0.50);
	Tuote t2("Kumipallo", 13, 1);
	Tuote t3("Galja", 3, 5);
	Tuote t4("Keissi", 3, 19);

	tuotteet.push_back(t1);
	tuotteet.push_back(t2);
	tuotteet.push_back(t3);
	tuotteet.push_back(t4);

}

void Kauppa::aloitaOhjelma()
{
	int valinta;
	do
	{
		cout << "Teretulemast miu shoppii! Valitseha sie toiminto :\n";
		cout << "(1) Tulostahan kaikki. \n";
		cout << "(2) Vaihdahan tuottehen hintaa \n";
		cout << "(3) Lissää uus tuote\n";
		cout << "(0) Loppuh\n";
		cin >> valinta;

	} while (valinta != 0);

	switch (valinta)
	{
	case 1:
		tulostaTuotteet();
		break;

	case 2:
		break;

	case 3:
		break;

	case 0:
		break;


	}


}


	
	
	void Kauppa::tulostaTuotteet()
	{
		int koko = tuotteet.size();

		cout << "--------------------------------\n";
		cout << "Kauphassasi on sheuraavia thuotteita:\n";

		for (int i = 0; i < koko; i++)
		{
			tuotteet[i].tulosta();
		}



	}

	void Kauppa::laskeAlennus()
	{
		int id;
		double alepros;

		cout << "Annahan tuote luokan ID";
		cin >> id;
		cout << "Annahan tuothe luokan alennusprosennti";
		cin >> alepros;

		int koko = tuotteet.size();

		for (int i = 0; i < koko; i++)
		{
			if(tuotteet.at(i).getId() == id)
			{
				tuotteet.at(i).Alelaskuri(alepros);
			}

		}

	}




