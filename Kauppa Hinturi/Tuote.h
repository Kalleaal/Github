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

	void Alelaskuri();

private:
	string nimi;
	int id;
	float hinta;
};


