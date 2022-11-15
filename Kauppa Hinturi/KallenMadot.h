#pragma once
#include "Tuote.h"
using namespace std;

class KallenMadotdotcom : public Tuote
{
public:
	KallenMadotdotcom(string x, int y, float z, int kpl, string syotti, string vari);
	
	~KallenMadotdotcom(void);
	
	void tulosta() override;

protected:

	int maara;
	string syotti;
	string vari;


};



class Matohoukuttimet : public Tuote
{
public:
	Matohoukuttimet(string x, int y, float z, string merkki, string malli, float colorRGB);



	void tulosta() override;


protected:

	string merkki;
	string malli;
	float vari;



};