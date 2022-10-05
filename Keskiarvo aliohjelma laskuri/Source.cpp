#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

/*Aliohjelma harjoitus keskiarvo taulukosta*/

int taulukonkeskiarvo(int taulukko[], int koko);

int main()
{

	int taulukko[]={1,4,3,54,5,6,56,8,9}, koko=9;

	int keskarv = taulukonkeskiarvo (taulukko,koko);

	cout << keskarv;




}

int taulukonkeskiarvo(int taulukko[], int koko) {
	float summa =0;
	for (int i = 0;i < 9; i++)
	{
		summa = summa + taulukko[i];
		
	}
	

	return (summa / koko);

}