/*
 * trojkat.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int bok1;
	int bok2;
	int bok3;
	bok1 = 0;
	bok2 = 0;
	bok3 = 0;
	cout << " Podaj 1 bok trójkąta ";
	cin >> bok1;
	cout << " Bok 1 ma długość: " << bok1;
	cout << " Podaj 2 bok trójkąta ";
	cin >> bok2;
	cout << " Bok 2 ma długość: " << bok2;
	cout << " Podaj 3 bok trójkąta ";
	cin >> bok3;
	cout << " Bok 3 ma długość: " << bok3;
/*
	if ((bok1 + bok2) > bok3) {
		if ((bok2 + bok3) > bok1) {
			if ((bok3 + bok1) > bok2) {
				cout << " Z podanych boków można sformować trójkąt ";
			} else {
				cout << " Z podanych boków nie można sformować trójkąta ";
			}
		
		} else {
			cout << " Z podanych boków nie można sformować trójkąta ";
		}
	} else {
		cout << " Z podanych boków nie można sformować trójkąta ";
	}
*/
	if (bok1 + bok2 > bok3 && bok1 + bok3 > bok2 && bok2 + bok3 > bok1) {
		cout << " Z podanych boków można sformować trójkąt ";
	} else {
		cout << " Z podanych boków nie można sformować trójkąta ";
	}
	return 0;
	}

