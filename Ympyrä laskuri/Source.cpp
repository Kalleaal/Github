#include <iostream>
#define PII 3.14159

int main()
{
	setlocale(LC_ALL, "");
	// Ympyr�n ala laskuri
	double S�de = 0;
	double Ala;

	// Datan sy�tt�
	std::cout << "Sy�t� ympyr�n s�de:";
	std::cin >> S�de;

	// Lasku
	Ala = PII * S�de * S�de;

	std::cout << "Ympyr�n ala on:" << Ala;


}