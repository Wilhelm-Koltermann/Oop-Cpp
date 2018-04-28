//Definition eines komplexen Datentyps

struct Complex {

	//Attribute

	double real;
	double imag;

	//Header der Memberfunktionen

	Complex();  //Standardkonstruktor
	Complex(double, double); //Datenkonstruktor
	double betrag(); //Betragsmethode
	void print(); //Ausgabemethode
	struct Complex invert();
	


};

//Header der auﬂerhalb definierten Funktionen

struct Complex operator+(struct Complex, struct Complex); //‹berladen des Additionsoperators
struct Complex operator*(struct Complex z1, struct Complex z2); //‹berladen des Multiplikationsoperators														
bool operator<(struct Complex z1, struct Complex z2); //‹berladen des Kleinergleich Operators