#pragma once
#include <string>
using namespace std;

class Tuote
{
public:
	// Konstruktori
	Tuote(string x, int y, float z);
	// Destruktori
	~Tuote(void);
	void asetaHinta(float h);
	virtual void tulosta();
	void alennettu(float alepros);
	int getid() { return id; };
	float haehinta();
	Tuote(string n);
	Tuote();
	Tuote(const Tuote &tuote);
	
	

protected:
	string nimi;
	int id;
	float hinta;
};


