#ifndef __Container__
#define __Container__

#include "Film.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
struct Container {
    enum { max_len = 10000 }; // максимальная длина
    int len; // текущая длина
    Film *cont[max_len];
};

// Инициализация контейнера
void Init(Container& c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(Container& c);

// Ввод содержимого контейнера из указанного потока
void In(Container& c, ifstream& ifst);

// Случайный ввод содержимого контейнера
void InRnd(Container& c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(Container& c, ofstream& ofst);

// Сортировка контейнера по отношению даты фильма к длине его названия
void Film_sort(Container& c);

#endif