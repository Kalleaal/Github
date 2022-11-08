#pragma once
#include "Tuote.h"
#include <iostream>
using namespace std;


class Asiakas
{
public:
	// Konstruktori
	Asiakas(string n, int k, float s);
	
	void lis‰‰Tilille(Tuote t);
	void lis‰‰Tilille(Tuote t, int lkm);
	void nollaa() { saldo = 0; };
	void tulosta();
	void maksaVelkaa(float lyhennys);


private:
	string nimi;
	int id = 0;
	float saldo = 0;
	float luottoraja = 0;

};