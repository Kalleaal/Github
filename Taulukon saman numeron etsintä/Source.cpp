#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

/*Aliohjelma harjoitus taulukosta etsiminen*/

int taulukonsuodatus(int taulukko[], int etsittava);

int main()
{
	setlocale(LC_ALL, "");

	int taulukko[] = { 1,4,3,54,5,6,56,8,9 },etsittava;
	char muuttuja='k';

	while (muuttuja == 'k' || muuttuja == 'K')
	{
		cout << "Syota etsittava numero: ";
		cin >> etsittava;
		int kertaa = taulukonsuodatus(taulukko, etsittava);
		cout << etsittava << " Esiintyy taulukossa: " << kertaa << " kertaa.";


		cout << "\n\nHaluatko etsi� uudestaan? vastaa K tai E: ";
		cin >> muuttuja;
		
	} 
	
}

int taulukonsuodatus(int taulukko[], int etsittava) {
	float krt=0;
	for (int i = 0; i < 9; i++)
	{
		if ( etsittava == taulukko[i])
		{
			krt++;

		}

	}


	return (krt);

}