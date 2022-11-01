#pragma once
#include <iostream>
using namespace std;


class Asiakas
{
public:
	// Konstruktori
	Asiakas(string n, int k, float s);
	// Destruktori
	~Asiakas(void);
	void tulosta();


private:
	string nimi;
	int id;
	float saldo;

};