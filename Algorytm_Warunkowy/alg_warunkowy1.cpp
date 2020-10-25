/*
 * alg_warunkowy1.cpp
 */


#include <iostream>
using namespace std;

int wynik = 0;


int main(int argc, char **argv)
{
	cout << "Podaj wynik" << endl;
	cin >> wynik;
	cout << "Twój wynik to: " << wynik << endl;
	
	if (wynik < 0 || wynik > 60){
		cout << " Błędne dane!";
	}
	else if (wynik < 20){
		cout << " Grupa podstawowa!";
	}
	else if (wynik <= 40){
		cout << " Grupa średniozaawansowana!";
	}
	else cout << " Grupa zaawansowana!";
	return 0;
}
