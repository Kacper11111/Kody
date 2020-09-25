/*
 * suma_parzyste.cpp
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int suma, liczba;
	int start, koniec;
	start = koniec = 0;
	
	cout << "Podaj liczbę począkową: ";
	cin >> start;
	
	cout << "Podaj liczbę końcową: ";
	cin >> koniec;
	
	suma = 0;
	
	for (liczba = start; liczba < koniec+1; liczba++) {
		if (liczba % 2 == 0)
			suma = suma + liczba;
	}
	cout << suma;
	return 0;
}
