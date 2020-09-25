/*
 * alg_warunkowy1.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int Wynik = 0;
	
	cout << "Podaj wynik ";
	cin >> Wynik;
	cout << "Twój wynik to: " << Wynik;
if (0 < Wynik || Wynik > 60) {
	cout << " Błędne dane! ";
	return 0;
	
	if (Wynik<20) cout << " Grupa podstawowa! ";
	else if (Wynik<=40) cout << " Grupa średniozaawansowana! ";
	else cout << " Grupa zaawansowana! ";
	return 0;

