/*
 * najwieksza.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a1;
	int a2;
	int a3;
	a1 = 0;
	a2 = 0;
	a3 = 0;
	cout << " Podaj 1 liczbę ";
	cin >> a1;
	cout << " Twoja 1 liczba to: " << a1;
	cout << " Podaj 2 liczbę ";
	cin >> a2;
	cout << " Twoja 2 liczba to: " << a2;
	cout << " Podaj 3 liczbę ";
	cin >> a3;
	cout << " Twoja 3 liczba to: " << a3;
	
	if(a1 > a2 && a1 > a3) {
		cout << " Najwiekszą liczbą jest liczba " << a1;
	}
	if(a2 > a1 && a2 > a3) {
		cout << " Najwiekszą liczbą jest liczba " << a2;
	}
	if(a3 > a1 && a3 > a2) {
		cout << " Najwiekszą liczbą jest liczba " << a3;
	}
	return 0;
}
