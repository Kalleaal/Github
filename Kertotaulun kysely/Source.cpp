#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	// Kertotaulun kysely ohjelma.

	
	int  kertoT = 0, vastaus = 0,  oikeatVastaukset=0, luku1=0;

	cout << "Tervetulo kertaamaan kertotauluja! \n Valitse mitä kertotaulua väliltä 1 - 10 haluat kerrata!?\n\n";

	cin >> kertoT;

	do 
	{
	

		cout << "Laske:" << luku1 << "*" << kertoT << "\n";
		cin >> vastaus;
	

		
		if (vastaus = kertoT*luku1) {
				oikeatVastaukset++;
		}
		
		luku1++;
	
	
	
	
	} while (luku1 <= 10 && luku1 > 0) ;

		
	cout << "Sait kertotaulusta oikeita vastauksia:\n" << oikeatVastaukset;



}