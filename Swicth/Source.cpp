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

	// Monesko
	int p�iv�, mP�iv�;

	cout << "Sy�t� viikon p�iv�n j�rjestys numero.\n";
	cin >> mP�iv�;

	switch (mP�iv�)
	{
	case 1:
		cout << "1. P�iv� on Maanantai";
		break;
	case 2:
		cout << "2. P�iv� on Tiistai";
		break;
	case 3:
		cout << "3. P�iv� on Keskiviikko";
		break;
	case 4:
		cout << "4. P�iv� on Torstai";
		break;
	case 5:
		cout << "5. P�iv� on Perjantai";
		break;
	case 6:
		cout << "6. P�iv� on Lauantai";
		break;
	case 7:
		cout << "7. P�iv� on Sunnuntai";
		break;
	default:
		cout << "Sy�t� 1-7";
	}
	
}