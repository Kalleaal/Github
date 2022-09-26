#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int luvut[6]{ 0 };

	for (int i = 0; i < 6; i++) 
	{
		// Kysytään lukua
		cout << "Anna numero ";
		cin >> luvut[i];
	}

	//tulostetaan taulukon sisältö
	for (int i = 0; i < 6 ; i=i+2) //korjaa!
	{
		cout << luvut[i] << "\n";
		
	}














}