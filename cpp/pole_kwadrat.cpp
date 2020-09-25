/*
 * pole_kwadrat.cxx
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int bok;  // deklaracja zmiennej
	int pole;
	bok = 0;  // inicjacja zmiennej
	pole = 0;
	cout << "Podaj bok kwadratu: ";
	cin >> bok;
	pole = bok * bok;
	cout << "Pole: " << pole;
	return 0;
}

