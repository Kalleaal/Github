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
	void tulosta();
	int getId() { return id; }
	void Alelaskuri(float alepros);
	float haehinta() { return hinta; };

private:
	string nimi;
	int id;
	float hinta;
};


