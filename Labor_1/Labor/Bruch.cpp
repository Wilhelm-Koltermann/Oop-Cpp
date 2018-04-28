#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Bruch.h"


//Datenkonstruktor
Bruch::Bruch(int a, int b)
{
	if (b != 0)
	{
		//Muss Bruch gekürzt werden?
		if (ggT(a, b) == 1)
		{
			//Bruch negativ?
			if (a < 0 || b < 0)
			{
				//Beide Zahlen negativ?
				if (a < 0 && b < 0)
				{
					zähler = abs(a);
					nenner = abs(b);
				}
				else
				{
					zähler = -abs(a);
					nenner = abs(b);
				}
			}
			else
			{
				zähler = a;
				nenner = b;
			}
		}
		else
		{
			if (a < 0 || b < 0)
			{
				if (a < 0 && b < 0)
				{
					zähler = abs(a) / ggT(a, b);
					nenner = abs(b) / ggT(a, b);
				}
				else
				{
					zähler = -abs(a) / ggT(a, b);
					nenner = abs(b) / ggT(a, b);
				}
			}
			else
			{
				zähler = a / ggT(a, b);
				nenner = b / ggT(a, b);
			}
		}
	}
	else
	{
		cout << "error, 0 im Nenner" << endl;
	}
}

//Überladen des <<-Operators
ostream& operator<< (ostream& s,struct Bruch b) 
{
	s << b.zähler << "/" << b.nenner << endl;
	return s;	
}

//ggT 
int ggT(int a, int b)
{
	if (a == 0)   
	{
		return abs(b);
	}
	while (b != 0)      
	{
		if (abs(a) > abs(b))
		{
			a = abs(a) - abs(b);        
		}
		else
		{
			b = abs(b) - abs(a);               
		}
	}
	return a;                         
}

//Überladen des +-Operators
struct Bruch operator+(struct Bruch a, struct Bruch b)
{
	if (a.nenner == b.nenner) 
	{
		struct Bruch c(a.zähler + b.zähler, b.nenner);
		return c;
	}
	else
	{
		int z = (a.zähler*b.nenner)+ (b.zähler*a.nenner);
		int n = a.nenner*b.nenner;
		struct Bruch c(z, n);
		return c;
	}
}

//Überladen des -Operators
struct Bruch operator-(struct Bruch a,struct Bruch b)
{
	if (a.nenner == b.nenner)
	{
		struct Bruch c(a.zähler - b.zähler, b.nenner);
		return c;
	}
	else
	{
		int z = (a.zähler*b.nenner) - (b.zähler*a.nenner);
		int n = a.nenner*b.nenner;
		struct Bruch c(z, n);
		return c;
	}
}

//Überladen des *-Operators
struct Bruch operator*(struct Bruch a, struct Bruch b)
{
	struct Bruch c(a.zähler*b.zähler, a.nenner*b.nenner);
	return c;
}

//Überladen des /-Operators
struct Bruch operator/(struct Bruch a, struct Bruch b)
{
	int t = b.nenner;
	b.nenner = b.zähler;
	b.zähler = t;
	struct Bruch c(a.zähler*b.zähler, a.nenner*b.nenner);
	return c;
}

//Überladen des ==-Operators
bool operator==(struct Bruch a, struct Bruch b)
{
	if (a.zähler == b.zähler && a.nenner == b.nenner) return true;
	else return false;
}

//Überladen des !=-Operators
bool operator!=(struct Bruch a, struct Bruch b) 
{
	return !(a == b);
}

//Überladen des <-Operators
bool operator<(struct Bruch a, struct Bruch b)
{
	int z1 = a.zähler*b.nenner;
	int z2 = a.nenner*b.zähler;

	if (z1 < z2) return true;
	else return false;
}

//Überladen des >-Operators
bool operator>(struct Bruch a, struct Bruch b)
{
	return !(a < b);
}

//Überladen des <=-Operators
bool operator<=(struct Bruch a,struct Bruch b)
{
	if (a < b || a == b) return true;
	else false;
}

//Überladen des <=-Operators
bool operator>=(struct Bruch a, struct Bruch b)
{
	if (a > b || a == b) return true;
	else false;
}

//zu Aufgabe 3:
//Version mit double
double summe(int n)
{
	double sum=0;
	for (double i = 1; i <= n; i++)
	{
		sum = sum + (i / (i + 1));
	}
	return sum;
}
//Version mit Bruch
struct Bruch sume(int n)
{
	struct Bruch summe(0, 1);
	for(int i=1; i<=n; i++)
	{
		summe = summe + Bruch(i,i+1);
	}
	return summe;
}