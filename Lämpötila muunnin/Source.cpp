#include <iostream>

int main()
{

	setlocale(LC_ALL, "");


	//L�mp�tilan konverttoija

	float Fahrenheit = 0;
	float Celsius;

	std::cout << "Sy�t� Fahrenheit l�mp�tila k��nnett�v�ksi:";
	std::cin >> Fahrenheit;

	 // Laskutoimitus

	Celsius = (Fahrenheit - 32) / 1.8;

	std::cout << Fahrenheit << " Astetta Fahrenheittia on Celsiuksena:";
	std::cout << Celsius;



}