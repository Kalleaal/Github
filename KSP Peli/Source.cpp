#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

		/*Tässä harjoitustyössä yritän saada tehtyä KSP pelin tietokonetta vastaan.
		peli päättyy kun valittu kierrosmäärä täyttyy. Ja peli kertoo tuloksen ja palaa alkuun.*/
	
		// Arvojen asettelu
	
	srand(time(0));

	int kVastaus = 0, valitutKierrokset = 1, pelaajanpisteet = 0, tietokoneenpisteet = 0 ;
		
		string Vastaus, Voittaja = "Olet voittaja!", Häviäjä = "Tietokone voitti!", Tasapeli = "Tasapeli!";

		
		
		// Kivisakset paperi peli esittelyy
		cout << "Terrrrvetuloa KSP peliin!\nKoita voittaa tietokone!\n\n";
		cout << "Ensin valitse kierrosten lukumäärä.\n";
		cout << "Seuraavaksi voit syöttää, pelivälineen!\n";
		cout << "Valitse: Kivi , Sakset tai Paperi\n";
		cout << "Onnea peliin!\n\n";
		cout << "Syötä haluamasi kierrosmäärä : ";
		cin >> valitutKierrokset;
		
		cin.ignore();
		
		int  kierrokset = 1 ;

	while(kierrokset <= valitutKierrokset) {
		int muuttuvaNumero = (rand() % 3) + 1;
		for (;;) {
				cin.clear();
				cout << "Kivi, Paperi vai Sakset?";
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
				cout << Tasapeli;
				cout << "\n";
				kierrokset++;
			}

			else if (kVastaus == 2) {
				cout << Voittaja;
				cout << "\n";
				pelaajanpisteet++;
				kierrokset++;
			}
			else if (kVastaus == 3) {
				cout << Häviäjä;
				cout << "\n";
				kierrokset++;
			}

		} // Tulos jos tietokone vastaa sakset.

		if (muuttuvaNumero == 2) {
			if (kVastaus == 1) {
				cout << Häviäjä;
				cout << "\n";
				kierrokset++;
			}

			else if (kVastaus == 2) {
				cout << Tasapeli;
				cout << "\n";
				kierrokset++;
			}

			else if (kVastaus == 3) {
				cout << Voittaja;
				cout << "\n";
				pelaajanpisteet++;
				cout << "\n";
				kierrokset++;
			}

		} // Jos tietokone valitsee kiven.

		if (muuttuvaNumero == 3) {
			if (kVastaus == 1) {
				cout << Voittaja;
				cout << "\n";
				pelaajanpisteet++;
				cout << "\n";
				kierrokset++;
			}

			else if (kVastaus == 2) {
				cout << Häviäjä;
				cout << "\n";
				kierrokset++;
			}

			else if (kVastaus == 3) {
				cout << Tasapeli;
				cout << "\n";
				kierrokset++;
			}

		} // Jos tietokone valitsee paperin.
		cout << "Pelatut kierrokset:" << kierrokset << "\n";
		cout << "Pisteesi:" << pelaajanpisteet << "\n";
	}
	
}