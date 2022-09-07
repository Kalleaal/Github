#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main() {


	double aNum, tulos;


	cout << "Luvun polariteetin analysaattori, kertoo luvun positiivisuuden tai negatiivisuuden.\n";
	cout << "Syötä analysoitava numero: \n";
	cin >> aNum;


	if (aNum >= 0) {
		cout << aNum <<" On suurempi kuin nolla.\n"
	}

	if (aNum <= 0) {
		cout << aNum << " On pienempi kuin nolla.\n"
	}

	if (aNum == 0) {
		cout << "Luku on nolla!\n"
	}

	return 0
}