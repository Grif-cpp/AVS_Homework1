#ifndef __Film__
#define __Film__

#include "Gaming.h"
#include "Cartoon.h"
#include "Documental.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фильмы
struct Film {
    // значения ключей для каждого типа фильма
    int name_length;
    char name[30];
    int date;
    enum key { GAMING, CARTOON, DOCUMENTAL };
    key k; // ключ
    // используемые альтернативы
    union {
        Gaming g;
        Cartoon c;
        Documental d;
    };
};
// Ввод фильма
Film *In(ifstream& ifdt);

// Случайный ввод фильма
Film *InRnd();

// Вывод фильма
void Out(Film& s, ofstream& ofst);

// Вычисление отножения даты к длине названия фильма 
double value(Film& f);

#endif