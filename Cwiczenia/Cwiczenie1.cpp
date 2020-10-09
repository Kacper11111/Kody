/*
 * Cwiczenie1.cpp
 * 
 * POZDRAWIAM ~ BARNABA
 */


#include <iostream>
using namespace std;


int staz = 1;
int zarobek = 1000;
int lata = 1;
int staz2 = 1;

void drukuj(){
	cout << "Pracujesz " << staz << " rok i zarabiasz " << zarobek << endl;
}


void awans(){
	staz2 = lata + 1;
	zarobek = lata * 1.1 * zarobek;
	cout << "Po " << staz2 << " latach stażu zarabiasz " << zarobek << endl;
}


int main(int argc, char **argv)
{
	cout << "Podaj przewidywany okres pracy [w latach] " << endl;
	cin >> lata;
	
	drukuj();
	awans();
	return 0;
}

