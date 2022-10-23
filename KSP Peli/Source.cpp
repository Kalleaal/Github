#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

void Menu();


int main()
{
	setlocale(LC_ALL, "");

	Menu();

		/*Tässä harjoitustyössä yritän saada tehtyä KSP pelin tietokonetta vastaan.
		peli päättyy kun valittu kierrosmäärä täyttyy. Ja peli kertoo tuloksen ja palaa alkuun.*/
	
		// Arvojen asettelu
	
	srand(time(0));

	int kVastaus = 0, valitutKierrokset = 0, pelaajanpisteet = 0, tietokoneenpisteet = 0 ;
		
		string Vastaus, Voittaja = "Olet voittaja!", Häviäjä = "Tietokone voitti!", Tasapeli = "Tasapeli!";

		
		
		// Kivisakset paperi peli esittely
		cout << "Terrrrvetuloa KSP peliin!\nKoita voittaa tietokone!\n\n";
		cout << "Ensin valitse kierrosten lukumäärä.\n";
		cout << "Seuraavaksi voit syöttää, pelivälineen!\n";
		cout << "Valitse: Kivi , Sakset tai Paperi\n";
		cout << "Onnea peliin!\n\n";
		cout << "Syötä haluamasi kierrosmäärä : ";
		cin >> valitutKierrokset;
		
		cin.ignore();
		
		int  kierrokset = 0
;

	while(kierrokset < valitutKierrokset) {
		int muuttuvaNumero = (rand() % 3) + 1;
		for (;;) {
				cin.clear();
				cout << "\n\nKivi, Paperi vai Sakset?" << "\n";
				getline(cin, Vastaus);

				if (!Vastaus.compare("Sakset") || !Vastaus.compare("sakset")) {
					kVastaus = 1;
					break;
				}

				if (!Vastaus.compare("Kivi") || !Vastaus.compare("kivi")) {
					kVastaus = 2;
					break;
				}

				if (!Vastaus.compare("Paperi") || !Vastaus.compare("paperi")) {
					kVastaus = 3;
					break;
				}

				else {
					cout << "Syötä oikea peliväline. \n";
				}

			} // Jatkuva looppi kunnes pelaaja syöttää oikean pelivälineen

		if (muuttuvaNumero == 1) {
			if (kVastaus == 1) {
				cout << "\n\n" << Tasapeli;
				cout << "\n";
				kierrokset++;
				cout << "\n";
			}

			else if (kVastaus == 2) {
				cout << "\n\n" << Voittaja;
				cout << "\n";
				pelaajanpisteet++;
				cout << "\n";
				kierrokset++;
				cout << "\n";
			}
			else if (kVastaus == 3) {
				cout << "\n\n" << Häviäjä;
				cout << "\n";
				tietokoneenpisteet++;
				cout << "\n";
				kierrokset++;
				cout << "\n";
			}

		} // Tulos jos tietokone vastaa sakset.

		if (muuttuvaNumero == 2) {
			if (kVastaus == 1) {
				cout << "\n\n" << Häviäjä;
				cout << "\n";
				kierrokset++;
				cout << "\n";
				tietokoneenpisteet++;
				cout << "\n";
			}

			else if (kVastaus == 2) {
				cout << "\n\n" << Tasapeli;
				cout << "\n";
				kierrokset++;
				cout << "\n";
			}

			else if (kVastaus == 3) {
				cout << "\n\n" << Voittaja;
				cout << "\n";
				pelaajanpisteet++;
				cout << "\n";
				kierrokset++;
				cout << "\n";
			}

		} // Jos tietokone valitsee kiven.

		if (muuttuvaNumero == 3) {
			if (kVastaus == 1) {
				cout << "\n\n" << Voittaja;
				cout << "\n";
				pelaajanpisteet++;
				cout << "\n";
				kierrokset++;
				cout << "\n";
			}

			else if (kVastaus == 2) {
				cout << "\n\n" << Häviäjä;
				cout << "\n";
				kierrokset++;
				tietokoneenpisteet++;
				cout << "\n";
			}

			else if (kVastaus == 3) {
				cout << "\n\n" << Tasapeli;
				cout << "\n";
				kierrokset++;
				cout << "\n";
			}

		} // Jos tietokone valitsee paperin.
		cout << "Pelatut kierrokset:" << kierrokset << "\n\n";
		cout << "Pisteesi:" << pelaajanpisteet << "\n\n";
		cout << "Tietokoneen pisteet:" << tietokoneenpisteet;
	} Menu();
	
}

void Menu ()
{
int valinta;
do
{
	cout << "\n\nKSP  v0.76 MENU\n\n0. Pelaa\n1. Kreditointi\n2. Lopeta\n";
	cin >> valinta;
	switch (valinta) {

	case 0:
		cout << "Peli alkaa!\n";
		break;
	case 1:
		cout << "\nTämän pelin on tehnyt TTV2022SP Luokan Kalle Aaltonen\n";
		break;
	case 2:
		cout << "\nKiitos kun pelasit! Näkemiin!\n";
		exit (0);
	
	}

} while (valinta != 0);

}