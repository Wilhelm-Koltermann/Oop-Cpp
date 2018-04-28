#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
#include "g_minimal.h"
#include "Rechteck.h"

int main(int argc, char** argv)
{
	
	int breite = 800;
	int hoehe = 600;
	g_create(breite, hoehe, "Initialen");
	
	while (!g_has_quit())
	{
		g_clear();
		//Buchstabe W
		Rechteck w1(200, 200, 100, 10);
		w1.zeichne();
		Rechteck w2(220,245,10,30);
		w2.zeichne();
		Rechteck w3(240,225,50,10);
		w3.zeichne();
		Rechteck w4(260, 245, 10, 30);
		w4.zeichne();
		Rechteck w5(280, 200, 100, 10);
		w5.zeichne();
		//Buchstabe K
		Rechteck k1(340, 200, 100, 10);
		k1.zeichne();
		Rechteck k2(350,200,10,10);
		k2.zeichne();
		Rechteck k3(360,190, 10, 10);
		k3.zeichne();
		Rechteck k4(370, 180, 10, 10);
		k4.zeichne();
		Rechteck k5(380, 170, 10, 10);
		k5.zeichne();
		Rechteck k6(390, 160, 10, 10);
		k6.zeichne();
		Rechteck k7(360, 210,10, 10);
		k7.zeichne();
		Rechteck k8(370,220, 10, 10);
		k8.zeichne();
		Rechteck k9(380, 230, 10, 10);
		k9.zeichne();
		Rechteck k10(390, 240, 10,10);
		k10.zeichne();
		Rechteck k11(400, 150, 10, 10);
		k11.zeichne();
		Rechteck k12(400, 250, 10, 10);
		k12.zeichne();
		//Bild zeigen
		g_show();
		g_delay(40);
	}
	g_destroy();
}