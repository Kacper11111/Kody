/*
 * petle_cw1.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	float a;
	float suma;
	float b;
	a=0;
	suma=0;
	b=0;
	
	cout << "podaj liczbe: ";
	cin >> a;
	
	suma = b+a;
	
		while(suma<= 75){
			cout << "podaj liczbe: ";
			cin >> a;
			suma = suma + a;
		}
		if (suma>=75){
		cout << suma;
	}
	
	return 0;
}

