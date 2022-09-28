#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;



void tulostapinta_ala(float pituus, float leveys);

int main() {

	setlocale(LC_ALL, "");

	float pit1 = 5.4;
	float lev1 = 7.9;


	tulostapinta_ala( pit1, lev1);
	tulostapinta_ala(4.999, 9.543);
	tulostapinta_ala(5.999, 11.543);
	tulostapinta_ala(6.999, 4.543);
	tulostapinta_ala(7.999, 56.543);


}

void tulostapinta_ala(float pituus, float leveys)
{
	float pinta_ala = pituus * leveys;
	cout << "Pinta-ala on: " << pinta_ala << endl;

}