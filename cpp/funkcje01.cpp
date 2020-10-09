/*
 * funkcje01.cpp
 */


#include <iostream>
#include <cmath>
using namespace std;


void sumuj(int a, int b) {
	int suma = a + b;
	cout << " Suma: " << suma << endl;
}


void odejmij(int a, int b) {
	int roznica = a - b;
	cout << " Różnica: " << roznica << endl;
}


void pomnoz(int a, int b) {
	int iloczyn = a * b;
	cout << " Iloczyn: " << iloczyn << endl;
}


void podziel(int a, int b) {
	int iloraz = a / b;
	cout << " Iloraz: " << iloraz << endl;
}


void podnies(int a, int b) {
	int potega = pow(a, b);
	cout << " Potęga: " << potega << endl;
}


int main(int argc, char **argv)
{
	int liczba1 = 0;
	int liczba2 = 0;
	cout << " Podaj 1 liczbę: " << endl;
	cin >> liczba1;
	cout << " Podaj 2 liczbę: " << endl;
	cin >> liczba2;
	sumuj(liczba1, liczba2);
	odejmij(liczba1, liczba2);
	pomnoz(liczba1, liczba2);
	podziel(liczba1, liczba2);
	podnies(liczba1, liczba2);
	return 0;
}

