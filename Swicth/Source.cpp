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
	int päivä, mPäivä;

	cout << "Syötä viikon päivän järjestys numero.\n";
	cin >> mPäivä;

	switch (mPäivä)
	{
	case 1:
		cout << "1. Päivä on Maanantai";
		break;
	case 2:
		cout << "2. Päivä on Tiistai";
		break;
	case 3:
		cout << "3. Päivä on Keskiviikko";
		break;
	case 4:
		cout << "4. Päivä on Torstai";
		break;
	case 5:
		cout << "5. Päivä on Perjantai";
		break;
	case 6:
		cout << "6. Päivä on Lauantai";
		break;
	case 7:
		cout << "7. Päivä on Sunnuntai";
		break;
	default:
		cout << "Syötä 1-7";
	}
	
}