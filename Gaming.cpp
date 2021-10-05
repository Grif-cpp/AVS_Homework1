#include "Gaming.h"
// Файловый ввод игрового фильма
void In(Gaming& g, ifstream& ifst) {
	ifst >> g.len;
	for (int i = 0; i < g.len; i++) {
		ifst >> g.producer[i];
	}
}

// Случайный ввод игрового фильма
void InRnd(Gaming& g) {
	g.len = rand() % 9 + 1;
	for (int i = 0; i < g.len; i++) {
		g.producer[i] = rand() % ('z' - 'a') + 'a';
	}
	
}

// Вывод параметров игрового фильма в форматируемый поток
void Out(Gaming& g, ofstream& ofst) {
	ofst << "It is Gaming film: producer = ";
	for (int i = 0; i < g.len; i++) {
		ofst << g.producer[i];
	}
	ofst << "\n";
}	