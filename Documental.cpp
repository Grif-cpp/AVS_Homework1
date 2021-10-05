#include "Documental.h"
// Файловый ввод документального фильма
void In(Documental& d, ifstream& ifst) {
	ifst >> d.length;
}

// Случайный ввод доументального фильма
void InRnd(Documental& d) {
	d.length = rand() % 120 + 40;
}

// Вывод параметров документального фильма в форматируемый поток
void Out(Documental& d, ofstream& ofst) {
	ofst << "It's Documental film: length of film in minutes = " << d.length
		<< "\n";
}