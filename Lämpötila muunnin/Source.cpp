#include <iostream>

int main()
{

	setlocale(LC_ALL, "");


	//Lämpötilan konverttoija

	float Fahrenheit = 0;
	float Celsius;

	std::cout << "Syötä Fahrenheit lämpötila käännettäväksi:";
	std::cin >> Fahrenheit;

	 // Laskutoimitus

	Celsius = (Fahrenheit - 32) / 1.8;

	std::cout << Fahrenheit << " Astetta Fahrenheittia on Celsiuksena:";
	std::cout << Celsius;



}