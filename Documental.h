#ifndef __Documental__
#define __Documental__

#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;

// Документальный фильм
struct Documental {
	int length;
};

// Файловый ввод игрового фильма
void In(Documental& d, ifstream& ifst);

// Случайный ввод игрового фильма
void InRnd(Documental& е);

// Вывод параметров игрового фильма в форматируемый поток
void Out(Documental& t, ofstream& ofst);

#endif