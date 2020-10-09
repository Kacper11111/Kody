/*
 * petle_cw6.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int liczba = 1;
	int licznik = 1;
	while (liczba != 0) {
		cout << " Podaj liczbę: ";
		cin >> liczba;
		cout << liczba << " " << endl;
		if(liczba % 2 == 0){
			licznik = licznik + liczba;
		}
	};
	return 0;
}

