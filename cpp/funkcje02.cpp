/*
 * funkcje02.cpp
 */


#include <iostream>
using namespace std;

int a = 0;
int b = 0;


void sumuj(){
	int suma = a + b;
	cout << " Suma: " << suma << endl;
}

int main(int argc, char **argv)
{
	cout << " Podaj liczby: " << endl;
	cin >> a;
	cin >> b;
	
	sumuj();
	
	return 0;
}

