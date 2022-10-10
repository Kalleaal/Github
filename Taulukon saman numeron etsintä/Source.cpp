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

	int taulukko[] = { 1,4,3,54,5,6,56,8,9 },etsittava;

	cout << "Syota etsittava numero: ";
	cin >> etsittava;
	int kertaa = taulukonsuodatus(taulukko, etsittava);
	cout << etsittava << " Esiintyy taulukossa: " << kertaa << "kertaa.";




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