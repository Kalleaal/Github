#include "Kauppa.h"
#include "Tuote.h"
#include <iostream>
#include <string>
using namespace std;

Kauppa::Kauppa(string nimi_, string osoite_)
{
	nimi = nimi_;
	osoite = osoite_;

	Tuote *t1 = new Tuote("Banaani", 1, 0.50);
	Tuote *t2 = new Tuote("Kumipallo", 13, 1);
	Tuote *t3 = new Tuote("Galja", 3, 5);
	Tuote *t4 = new Tuote("Keissi", 3, 19);

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
		cout << "Teretulemast miu shoppii! Valitseha sie toiminto\n";
		cout << "(1) Tulostahan kaikki. \n";
		cout << "(2) Alennethaan tuotteen hintaa\n";
		cout << "(3) Liss?? uus tuote\n";
		cout << "(0) Loppuh\n";
		cin >> valinta;

	

		switch (valinta)
		{
			case 1:
			tulostaTuotteet();
			break;

			case 2:
			laskeAlennus();
			break;

			case 3:
			lisaaTuote();
			break;

			case 0:
				break;
		
		}

	} while (valinta != 0);
}

void Kauppa::lisaaTuote()
{
	string nimi;
	float hinta;
	int id;
	
	cin.ignore();
	cout << "Annaha tuottehen nimi > ";
	getline(cin, nimi);
	cout << "Sulla on varmaan tuothel hintha? > ";
	cin >> hinta;
	cout << "ID varmaa l?ytyy? > ";
	cin >> id;

	Tuote* lisattavatuote = new Tuote(nimi, hinta, id);
	tuotteet.push_back(lisattavatuote);
}
	
	
	void Kauppa::tulostaTuotteet()
	{
		int koko = tuotteet.size();

		cout << "--------------------------------\n";
		cout << "Kauphassasi on sheuraavia thuotteita:\n";

		for (int i = 0; i < koko; i++)
		{
			tuotteet[i]->tulosta();
		}



	}

	void Kauppa::laskeAlennus()
	{
		int id;
		double alepros;

		cout << "Annahan tuote luokan ID  ";
		cin >> id;
		cout << "Annahan tuothe luokan alennusprosennti  ";
		cin >> alepros;

		int koko = tuotteet.size();

		for (int i = 0; i < koko; i++)
		{
			if(tuotteet.at(i)->getid() == id)
			{
				tuotteet.at(i)->alennettu(alepros);
			}

		}

	}




