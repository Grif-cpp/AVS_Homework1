#include "Film.h"
// Ввод фильма
Film* In(ifstream &ifst) {
    Film* fi;
    fi = new Film;
    ifst >> fi->name_length >> fi->name >> fi->date;
    int k;
    ifst >> k;
    switch (k) {
        case 1:
            fi->k = Film::GAMING;
            In(fi->g, ifst);
            return fi;
        case 2:
            fi->k = Film::CARTOON;
            In(fi->c, ifst);
            return fi;
        case 3:
            fi->k = Film::DOCUMENTAL;
            In(fi->d, ifst);
            return fi;
        default:
        return 0;
    }
}

// Случайный ввод фильма
Film *InRnd() {
    Film* fi;
    auto k = rand() % 2 + 1;
    switch (k) {
    case 1:
        fi = new Film;
        fi->k = Film::GAMING;
        InRnd(fi->g);
        fi->name_length = rand() % 28 + 1;
        for (int i = 0; i < fi->name_length; i++) {
            fi->name[i] = (rand() % 26) + 'a';
        }
        fi->date = rand() % 120 + 1900;
        return fi;
    case 2:
        fi = new Film;
        fi->k = Film::CARTOON;
        InRnd(fi->c);
        fi->name_length = rand() % 28 + 1;
        for (int i = 0; i < fi->name_length; i++) {
            fi->name[i] = (rand() % 26) + 'a';
        }
        fi->date = rand() % 120 + 1900;
        return fi;
    case 3:
        fi = new Film;
        fi->k = Film::DOCUMENTAL;
        InRnd(fi->d);
        fi->name_length = rand() % 28 + 1;
        for (int i = 0; i < fi->name_length; i++) {
            fi->name[i] = (rand() % 26) + 'a';
        }
        fi->date = rand() % 120 + 1900;
        return fi;
    default:
        return 0;
    }
}

// Вывод фильма
void Out(Film& f, ofstream& ofst) {
    ofst << "Film name: ";
    for (int i = 0; i < f.name_length; i++) {
        ofst << f.name[i];
    }
    ofst << "  Date of film: " << f.date
        << "  ";
    switch (f.k) {
    case Film::GAMING:
        Out(f.g, ofst);
        break;
    case Film::CARTOON:
        Out(f.c, ofst);
        break;
    case Film::DOCUMENTAL:
        Out(f.d, ofst);
        break;
    default:
        ofst << "Incorrect type of film!" << endl;
    }
}

// Вычисление отношения даты к длине названия фильма 
double value(Film& f) {
	return (double(f.date) / double(f.name_length));
}
