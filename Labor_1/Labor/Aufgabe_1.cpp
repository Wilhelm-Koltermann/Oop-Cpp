// Aufgabe_1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Bruch.h"
#include <iomanip>



int main()
{
	
	//Aufgabe 2:
	double a=4.3, b=0.1;
	struct Bruch c(43, 10), d(1, 10);
	//Ausgabe der Werte
	cout << "Ausgabe 2: ";
	cout << "Ausgabe mit double: " << setprecision(20) << (a / b)*b << endl;
	cout << "Ausgabe mit Bruch: " << ((c / d)*d) << endl;
	//Aufgabe 3:
	int n;
	cout << "Geben Sie eine natuerliche Zahl ein: ";
	cin >> n;
	cout << "Ausgabe mit double: "<< summe(n) << endl;
	cout << "Ausgabe mit Bruch: " << sume(n) << endl;

    return 0;
}

