#pragma once
//Klasse Rechteck
class Rechteck
{
public:
	Rechteck(double, double, double, double);
	void zeichne();
	int tilt_factor;
private:
	//(x,y) der Mittelpunkt d. Rechtecks, h die Höhe & b die Breite
	double x, y, h, b;
};