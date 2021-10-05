#include "Container.h"
#include <iostream>
//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(Container& c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(Container& c) {
    for (int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void In(Container& c, ifstream& ifst) {
    while (!ifst.eof()) {
        if ((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void InRnd(Container& c, int size) {
    while (c.len < size) {
        if ((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Out(Container& c, ofstream& ofst) {
    ofst << "Container contains " << c.len << " elements." << endl;
    for (int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

//------------------------------------------------------------------------------
// Сортировка контейнера по отношению даты фильма к длине его названия
void Film_sort(Container& c) {
    int n = c.len;
    for (int i = 1; i < n; i++)
        for (int j = i; j > 0 && value(*(c.cont[j - 1])) > value(*(c.cont[j])); j--)
            std::swap(c.cont[j - 1], c.cont[j]);
}
