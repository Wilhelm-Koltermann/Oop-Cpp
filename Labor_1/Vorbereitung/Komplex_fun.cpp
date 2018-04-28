
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Komplex.h"

//Standardkonstruktor

Complex :: Complex() {

	real = imag = 0;

}

//Datenkonstruktor

Complex::Complex(double initreal, double initimag) {

	real = initreal;
	imag = initimag;


}

//Betragsmethode

double Complex::betrag() {

	return sqrt(imag*imag + real * real);

}

//Ausgabemethode

void Complex :: print() {
	if (imag > 0)
	{
		cout << real << " + " << imag << "i" << endl;
	}
	else
	{
		cout << real << imag << "i" << endl;
	}
}

//Überladung des Plusoperator

struct Complex operator+(struct Complex z1, struct Complex z2) {

	return { z1.real + z2.real, z1.imag + z2.imag };

}

//Überladen des Multiplikationsoperators

struct Complex operator*(struct Complex z1, struct Complex z2) {

	struct Complex val;

	val.real = (z1.real * z2.real) - (z1.imag * z2.imag);
	val.imag = (z1.real * z2.imag) + (z1.imag * z2.real);

	return val;

}

//Überladen des Kleinergleich Operators

bool operator<(struct Complex z1, struct Complex z2) {

	if (z1.betrag() < z2.betrag()) return true;

	else return false;

}


//z^-1
struct Complex Complex::invert()
{
	double i1 = (real / (real*real + imag*imag));
	double i2 = ((-imag) / (real*real + imag * imag));
	return { i1,i2 };
}