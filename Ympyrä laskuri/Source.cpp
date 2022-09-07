#include <iostream>
#define PII 3.14159

int main()
{
	setlocale(LC_ALL, "");
	// Ympyrän ala laskuri
	double Säde = 0;
	double Ala;

	// Datan syöttö
	std::cout << "Syötä ympyrän säde:";
	std::cin >> Säde;

	// Lasku
	Ala = PII * Säde * Säde;

	std::cout << "Ympyrän ala on:" << Ala;


}