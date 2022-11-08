#include "Asiakastili.h"
#include <iostream>
using namespace std;



Asiakas::Asiakas(string n, int k, float s)
	: nimi(n), id(k), luottoraja(s) {}

void Asiakas::lisääTilille(Tuote t)
{
	lisääTilille(t, 1);
}

void Asiakas::lisääTilille(Tuote t, int lkm)
{
	float hinta = t.haehinta();
	saldo += t.haehinta();

	if( saldo+hinta*lkm > luottoraja)
	{
		cout << "Ei siul o rahhaa! \n";
	}

	else 
	{
		saldo += t.haehinta();
	}
}


void Asiakas::tulosta()
{
	cout << "Nimi:  " << nimi << "\n";
	cout << "id:    " << id << "\n";
	cout << "Saldo  " << saldo << "\n";
}

void Asiakas::maksaVelkaa(float lyhennys)
{
	saldo -= lyhennys;
	if (saldo < 0) { saldo = 0; }

}
