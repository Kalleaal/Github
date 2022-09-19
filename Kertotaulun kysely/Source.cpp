#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	// Kertotaulun kysely ohjelma.

	string v1, v2, v3, v4, v5, v6, v7, v8, v9, v10;
	int kertoja=1, oikeatVastaukset=0;

	cout << "Tervetulo kertaamaan kertotauluja! \n Valitse mitä kerto taulua väliltä 1 - 10 haluat kerrata!?\n\n";

	do {

		cout << "\nSyötä kertotaulun valinta lukuna 1 - 10\n";
		cin >> kertoja;
		
	} while (kertoja > 1 || kertoja < 10);

	cout << "Paljonko on" << kertoja * 1;
	cin >> v1;
		




}