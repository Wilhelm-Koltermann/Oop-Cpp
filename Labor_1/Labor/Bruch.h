//Definition des Datentyps Bruch

struct Bruch {

	//Attributte
	int zähler, nenner;
	//Datenkonstruktor
	Bruch(int,int);

};

//Überladen des <<-Operators
ostream& operator<<(ostream&, struct Bruch);
//ggT
int ggT(int, int);
//Überladen des +-Operators
struct Bruch operator+(struct Bruch a, struct Bruch b);
//Überladen des -Operators
struct Bruch operator-(struct Bruch a, struct Bruch b);
//Überladen des *-Operators
struct Bruch operator*(struct Bruch a, struct Bruch b);
// Überladen des / -Operators
struct Bruch operator/(struct Bruch a, struct Bruch b);
//Überladen des ==-Operators
bool operator==(struct Bruch a, struct Bruch b);
bool operator!=(struct Bruch a, struct Bruch b);
//Überladen des <-Operators
bool operator<(struct Bruch a, struct Bruch b);
//Überladen des >-Operators
bool operator>(struct Bruch a, struct Bruch b);
//Überladen des <=-Operators
bool operator<=(struct Bruch a, struct Bruch b);
//Überladen des <=-Operators
bool operator>=(struct Bruch a, struct Bruch b);
//Aufgabe 3: Funktion Summe mit double
double summe(int);
//Funktion summe mit Bruch
struct Bruch sume(int);
