#include <iostream>
#include <string>
using namespace std;


/* Tehd‰‰n ohjelma joka kysyy kaksi lukua, jotka talletetaan int muuttujiin luku1 ja 2.
M‰‰ritet‰‰n lis‰ksi kaksi p1 ja 2 muuttujaa joille arvoksi sijoitetaan luku muuttujien arvot.
M‰‰rittele muutuja summa sek‰ kolmas int muuttuja p3, */


/* Tee ali ohjelma joka vaihtaa int tyyppien arvot kesken‰‰n*/

void vaihtaja(int* luku1, int* luku2);






int main()
{
	//Tavalliset muuttujat.
	int luku1 = 0;
	int luku2 = 0;
	int luku3 = 0;

	//Osoitin muuttujat.
	int* p1 = &luku1;
	int* p2 = &luku2;
	int* p3 = &luku3;

	cout << "Anna 1. Luku: ";
	cin >> *p1;

	cout << "Anna 2. Luku: ";
	cin >> *p2;


	cout << luku1 << "\n" << luku2 << "\n";
	
	*p3 = *p1 + *p2;

	cout << "Luvun 1 ja 2 summa on: " << *p3 << "\n\n";


	int a = 0;
	int b = 100;

	vaihtaja(&a, &b);


	cout << "a:n arvo: " << a << " ja b:n arvo: " << b << "\n\n";


}

void vaihtaja(int* a, int* b)
{
	int placeholder1;
	int placeholder2;
	placeholder1 = *a;
	placeholder2 = *b;
	*a = placeholder2;
	*b = placeholder1;

}
