#include "Cartoon.h"

// Файловый ввод мультфильма
void In(Cartoon& c, ifstream& ifst) {
	int t;
	ifst >> t;
	switch (t) {
		case 1:
			c.type = DRAWN;
			break;
		case 2:
			c.type = DOLLHOUSE;
			break;
		case 3:
			c.type = PLASTILINE;
			break;
	}
}

// Случайный ввод мультфильма
void InRnd(Cartoon& c) {
	int t = rand() % 3 + 1;
	switch (t) {
		case 1:
			c.type = DRAWN;
			break;
		case 2:
			c.type = DOLLHOUSE;
			break;
		case 3:
			c.type = PLASTILINE;
			break;
	}
}

// Вывод параметров мультфильма в форматируемый поток
void Out(Cartoon& c, ofstream& ofst) {
	ofst << "Type of Cartoon: ";
	switch (c.type) {
	case DRAWN:
		ofst << "drawn \n";
		break;
	case DOLLHOUSE:
		ofst << "dollhouse \n";
		break;
	case PLASTILINE:
		ofst << "plastiline \n";
		break;
	}
}