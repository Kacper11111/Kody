/*
 * czy_parzysta.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int liczba1;
	cout << " Podaj 1 liczbę ";
	cin >> liczba1;
	cout << "Wybrana liczba to: " << liczba1;
	if (liczba1 % 2 == 0) {
		cout << " Wybrana liczba jest parzysta ";
	} else { cout << " Wybrana liczba jest nieparzysta ";
	}
	return 0;
}

