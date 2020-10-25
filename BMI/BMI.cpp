/*
 * BMI.cpp
 */


#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char **argv)
{
	int masa = 0;
	int wzrost = 0;
	float wzrostM = 0;
	float BMI = 0;
	
	cout << "Podaj masę ciała (kg)" << endl;
	cin >> masa;
	cout << "Podana masa to " << masa << "kg" << endl;
	
	cout << "Podaj wzrost (cm)" << endl;
	cin >> wzrost;
	cout << "Podany wzrost to " << wzrost << "cm" << endl;
	
	wzrostM = wzrost * 0.01;
	
	BMI = masa / pow(wzrostM, 2);
	cout << "Twoje BMI wybnosi: " << BMI << endl;
	
	if (BMI < 0){
		cout << "Błędne dane!";
	}
	else if (BMI >= 0 and BMI < 18.5){
		cout << "NIEDOWAGA";
	}
	else if (BMI >= 18.5 and BMI < 25){
		cout << "NORMA";
	}
	else if (BMI >= 25 and BMI < 30){
		cout << "NADWAGA";
	}
	else if (BMI >= 30 and BMI <= 50){
		cout << "OTYŁOŚĆ";
	}
	else{
		cout << "Błędne dane!";
	}
	return 0;
}

