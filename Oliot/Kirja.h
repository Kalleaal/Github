#pragma once
#include <string>

class Kirja
{
public:
	// Konstruktori
	Kirja(std::string n, std::string k, int s);
	// Destruktori
	~Kirja(void);
	void tulosta();

private:
	std::string nimi;
	std::string kirjailija;
	int sivut;

};

