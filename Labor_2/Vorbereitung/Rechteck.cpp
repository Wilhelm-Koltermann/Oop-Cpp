#include "Rechteck.h"
#include "g_minimal.h"
#include <iostream>
using namespace std;
//Datenkonstruktor
Rechteck::Rechteck(double m1,double m2, double hoehe, double breite)
{
	x = m1;
	y = m2;
	h = hoehe;
	b = breite;
}

//Methode zeichne
void Rechteck::zeichne()
{
	//g_fill_circle(x, y, 2, g_rgb(255,0 , 0));
	//g_fill_circle(x-b/2, y-h/2, 3, g_rgb(0, 255, 0));
	g_draw_line(x - b / 2, y - h / 2, x + b / 2, y - h / 2, g_rgb(x, y, h));
	g_draw_line(x - b / 2, y + h / 2, x + b / 2, y + h / 2, g_rgb(x, y, h));
	g_draw_line(x - b / 2, y - h / 2, x - b / 2, y + h / 2, g_rgb(x, y, h));
	g_draw_line(x + b / 2, y - h / 2, x + b / 2, y + h / 2, g_rgb(x, y, h));
}
