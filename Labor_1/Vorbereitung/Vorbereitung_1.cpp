// Vorbereitung_1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Komplex.h"
using namespace std;
#include <iostream>


void main()
{
	struct Complex a, b(2, -1), c, d = a+b+c;
	
	a = b.invert();
	
	a.print();

}

