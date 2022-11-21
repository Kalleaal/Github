#include <iostream>
#include "KallenMadot.h"
using namespace std;

KallenMadotdotcom::KallenMadotdotcom(string x, int y, float z, int kpl, string syotti_, string vari_)
	: Tuote(x,y,z)
{
	maara = kpl;
	syotti = syotti_;
	vari = vari_;
}

KallenMadotdotcom::~KallenMadotdotcom(void)
{
}

void KallenMadotdotcom::tulosta()
{
	Tuote::tulosta();


}

Matohoukuttimet::Matohoukuttimet(string x, int y, float z, string merkki_, string malli_, float colorRGB) 
	: Tuote(x,y,z)
{
	merkki = merkki_;
	malli = malli_;
	vari = colorRGB;

}

void Matohoukuttimet::tulosta()
{
	Tuote::tulosta();

	cout << "Merkki: " << merkki << "\n";
	cout << "Malli: " << malli << "\n";
	cout << "vari  " << vari << " Euroa\n\n";
}
