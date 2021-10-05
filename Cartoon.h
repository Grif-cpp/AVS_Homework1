#ifndef __Cartoon__
#define __Cartoon__

#include<cstdlib>
#include<fstream>
using namespace std;

enum Type_of_cartoon {
	DRAWN,
	DOLLHOUSE,
	PLASTILINE
};
// Мультфильм
struct Cartoon {
	Type_of_cartoon type;
};

// Файловый ввод мультфильма
void In(Cartoon& g, ifstream& ifst);

// Случайный ввод мультфильма
void InRnd(Cartoon& g);

// Сортировка контейнера по отношению даты фильма к длине его названия
void Out(Cartoon& t, ofstream& ofst);

#endif