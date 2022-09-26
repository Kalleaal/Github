/*Tee ohjelma, jolle voit syˆtt‰‰ opiskeluun k‰ytt‰m‰si
tuntien m‰‰r‰n p‰iv‰ kerrallaan yhden viikon 
ajalta(ma - su).K‰yt‰ taulukkoa ja for - silmukkaa!
Ohjelma laskee keskim‰‰r‰isen p‰ivitt‰isen opiskeluajan 
ja opiskeluun k‰ytetyt tunnit viikolla/viikonloppuna:*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int days[7]={ 0 };
	double summa = 0 ,viikonkeskiarvo=0,vklp=0;
	cout << "Syˆt‰ p‰ivien tuntim‰‰r‰t.\n";

	for (int i = 0; i < 7; i++)
	{
		cout << ":";
		cin >> days[i];
		summa += days[i];
	}

	viikonkeskiarvo = summa / 7 ;
	vklp = days[5] + days[6] /2 ;
	cout << "Viikolla opiskelit yhteens‰:" << summa << "tuntia." << endl;
	cout << "Viikolla opiskellut tunnit keskim‰‰rin:" << viikonkeskiarvo << endl;
	cout << "Viikonlopun opiskellut tunnit keskim‰‰rin:" << vklp << endl;

	
}