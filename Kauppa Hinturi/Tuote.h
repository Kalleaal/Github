#pragma once
#include <string>
using namespace std;

class Tuote
{
public:
	// Konstruktori
	Tuote(string n, int k, float s);
	// Destruktori
	~Tuote(void);
	void asetaHinta(float h);
	void tulosta();
	void alennettu(float alepros);
	int getid() { return id; };
	float haehinta() { return hinta; };
	void asetaHinta(float h);

private:
	string nimi;
	int id;
	float hinta;
};


