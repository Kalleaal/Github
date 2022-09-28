#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

/*Aliohjelma harjoitus hinnan alennus*/

float alennuslaskuri(float m‰‰re1, float prosentti);

int main()
{
	setlocale(LC_ALL, "");

	float hinta, alennus;

		
	cout << "Syˆt‰ tuotteen hinta: \n";
		cin >> hinta;
		cout << "Syˆt‰ tuotteen alennus prosentti: \n";
		cin >> alennus;
		cout << "Alennettu hinta on: ";
		float tulos = alennuslaskuri(hinta,alennus);
		cout << tulos;

}

float alennuslaskuri (float m‰‰re1, float prosentti)
{
	return (m‰‰re1 / -100 * prosentti) + m‰‰re1;

}