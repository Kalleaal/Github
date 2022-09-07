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

		/*T�ss� harjoitusty�ss� yrit�n saada tehty� KSP pelin tietokonetta vastaan.
		peli p��ttyy kun valittu kierrosm��r� t�yttyy. Ja peli kertoo tuloksen ja palaa alkuun.*/
	
		// Arvojen asettelu
	
	srand(time(0));

	int kVastaus = 0, valitutKierrokset = 1, pelaajanpisteet = 0, tietokoneenpisteet = 0 ;
		
		string Vastaus, Voittaja = "Olet voittaja!", H�vi�j� = "Tietokone voitti!", Tasapeli = "Tasapeli!";

		
		
		// Kivisakset paperi peli esittelyy
		cout << "Terrrrvetuloa KSP peliin!\nKoita voittaa tietokone!\n\n";
		cout << "Ensin valitse kierrosten lukum��r�.\n";
		cout << "Seuraavaksi voit sy�tt��, peliv�lineen!\n";
		cout << "Valitse: Kivi , Sakset tai Paperi\n";
		cout << "Onnea peliin!\n\n";
		cout << "Sy�t� haluamasi kierrosm��r� : ";
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
					cout << "Sy�t� oikea peliv�line. \n";
				}

			} // Jatkuva looppi kunnes pelaaja sy�tt�� oikean peliv�lineen

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
				cout << H�vi�j�;
				cout << "\n";
				kierrokset++;
			}

		} // Tulos jos tietokone vastaa sakset.

		if (muuttuvaNumero == 2) {
			if (kVastaus == 1) {
				cout << H�vi�j�;
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
				cout << H�vi�j�;
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