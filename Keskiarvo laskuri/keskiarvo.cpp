#include<iostream>

int main()
{

	setlocale(LC_ALL, "");
	// M��ritet��n luvut
	int Luku1 = 0;
	int Luku2 = 0;
	float Keskiarvo;


	//Kysyt��n luvut laskuun
	std::cout << " Sy�t� keskiarvolaskuriin ensimm�innen luku";
	std::cin >> Luku1;
	std::cout << " Sy�t� keskiarvolaskuriin toien luku";
	std::cin >> Luku2;

	// Keskiarvon laskeminen

	Keskiarvo = (Luku1 + Luku2) / 2;
	std::cout << "Keskiarvo on:" << Keskiarvo;
	return 0;

}