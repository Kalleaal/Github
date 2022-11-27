#include "OstosLista.h"
#include <iostream>
#include "Ostos.h"
#include <fstream>
#include <Windows.h>
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
			tyhjennä();
			break;

		case 0:
			kirjoitatiedostoon();

		}

		if (valinta != 0)
		{
			cout << "Paina anykey jatkaaksesi." << "\n";
			cin.ignore();
			cin.get();
			system("cls");
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
	cout << "Ostoslistalla on tällä hetkellä:" << endl;
	for (int i = 0; i < Ostokset.size(); i++)
	{
		Ostokset[i]->tulosta();

	}


}

void OstosLista::kirjoitatiedostoon()
{
	ofstream myFile(Lista, fstream::trunc );
	if (myFile)
	{
		for (int i = 0; i < Ostokset.size(); i++)
		{
			myFile << Ostokset[i]->haenimi() << "\n";
			myFile << Ostokset[i]->haekpl() << "\n";
		}
		myFile.close();
	}
	else
	{
		cout << "Virhe tiedoston avaamisessa!" << endl;
	}

}

void OstosLista::luetiedosto()
{
	string nimi;
	string kpl;

	ifstream myFile;
	myFile.open(Lista);

	if (myFile)
	{
		while (myFile.peek() != EOF)
			getline(myFile, nimi);
		getline(myFile, kpl);

		Ostos* lisaaOstos = new Ostos(nimi, atoi(kpl.c_str()));
		Ostokset.push_back(lisaaOstos);
	}

}

void OstosLista::tyhjennä()
{
	ofstream myFile(Lista, ofstream::trunc);
	myFile.close();
	Ostokset.clear();

}

OstosLista::~OstosLista(void)
{

}

void Ostos::tulosta()
{
	std::cout << "Nimi:" << Nimi << std::endl;
	std::cout << "Maara: " << Kpl << "\n\n";
}