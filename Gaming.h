#ifndef __Gaming__
#define __Gaming__

#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;
// Игровой фильм.
struct Gaming {
	char producer[30];
	int len;
};

// Файловый ввод игрового фильма
void In(Gaming& g, ifstream& ifst);

// Случайный ввод игрового фильма
void InRnd(Gaming& е);

// Вывод параметров игрового фильма в форматируемый поток
void Out(Gaming& t, ofstream& ofst);

#endif