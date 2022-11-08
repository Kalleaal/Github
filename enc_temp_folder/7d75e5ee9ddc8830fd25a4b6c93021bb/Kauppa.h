#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Tuote.h"
using namespace std;

/*Tee luokka Kauppa, jolla on attribuutit nimi, osoite ja vector-tyyppinen lista Tuote-olioita. 
(Huom! vektoria ei tarvitse alustaa konstruktorissa!)

Tee metodit uuden tuotteen lis‰‰miseen ja kaikkien kaupassa olevien tuotteiden tulostamiseen. 
Metodi, joka lis‰‰ tuotteen kauppaan, kysyy k‰ytt‰j‰lt‰ uuden tuotteen tiedot

Tee Kauppa-luokaan metodi, jolla voi muuttaa tietyn tuotteen hintaa. Metodi kysyy tuotteen id:n 
ja alennusprosentin k‰ytt‰j‰lt‰. Jotta voit vertailla tuotteiden id-numeroita, 
tarvitset Tuote-luokkaan yhden uuden metodin.*/

class Kauppa
{
public:
	Kauppa(string nimi_, string osoite_);

	void aloitaOhjelma(); //Valikko

	void tulostaTuotteet();

	void laskeAlennus();

	void lisaaTuote();

private:
	string nimi;
		string osoite;
		vector<Tuote> tuotteet; //t‰t‰ ei tarvitse alustaa

		

};

