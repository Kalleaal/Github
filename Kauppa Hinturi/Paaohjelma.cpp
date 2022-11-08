#include "Tuote.h"
#include "Kauppa.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	setlocale(LC_ALL, "");

	Kauppa Kauppa("Siwa", "K-Kauppa");

	Kauppa.aloitaOhjelma();
}