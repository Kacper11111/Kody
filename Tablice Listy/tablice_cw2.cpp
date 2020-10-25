/*
 * tablice_cw2.cpp
 */


#include <iostream>
using namespace std;


void pobierz(int t[]){
    int liczba = 0;
    for (int i = 0; i<5; i++){
        cout << "Podaj liczbę ";
        cin >> liczba;
        if (liczba > 0 and liczba <= 9)
			t[i] = liczba;
		else
			i--;
    }
}


int suma(int t[]){
    float suma = 0;
    for (int i = 0; i<5; i++){
        suma+= t[i];      
    }
    return suma;
}


int main(int argc, char **argv)
{
	int i = 5;
    int t1[i];
    int t2[i];
    int suma1;
    int suma2;
    cout << "Pierwsza seria: "<< endl;
    pobierz(t1);
    cout << "Druga seria: "<< endl;
    pobierz(t2);
    suma1 = suma(t1);
    suma2 = suma(t2);
    cout << "Suma 1 serii to: " << suma1 << endl;
    cout << "Suma 2 serii to: " << suma2 << endl;
	if (suma1 > suma2)
		cout << "Suma 1 serii jest wieksza" << endl;
	else if (suma2 > suma1)
		cout << "Suma 2 serii jest wieksza" << endl;
	else
		cout << "Suma obydwu serii są równe" << endl;
		
	return 0;
}

