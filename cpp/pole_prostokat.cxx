/*
 * pole_prostokat.cxx
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int bok1;
	int bok2;
	int pole;
	bok1 = 0;
	bok2 = 0;
	pole = 0;
	cout << "Podaj 1 bok kwadratu: ";
	cin >> bok1;
	cout << "Podaj 2 bok kwadratu: ";
	cin >> bok2;
	pole = bok1 * bok2;
	cout << "Pole: " << pole;
	return 0;
}

