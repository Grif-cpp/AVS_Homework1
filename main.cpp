#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>

#include "Container.h"
using namespace std;

void errMessage1() {
    cout << "incorrect command line!\n"
        "  Waited:\n"
        "     command -f infile outfile01 outfile02\n"
        "  Or:\n"
        "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    cout << "incorrect qualifier value!\n"
        "  Waited:\n"
        "     command -f infile outfile01 outfile02\n"
        "  Or:\n"
        "     command -n number outfile01 outfile02\n";
}


int main(int argc, char* argv[]) {
    if (argc != 5) {
        errMessage1();
        return 1;
    }
    cout << "Start" << endl;
    Container c;
    Init(c);
    if (!strcmp(argv[1], "-f")) {
        ifstream ifst(argv[2]);
        In(c, ifst);
    }
    else if (!strcmp(argv[1], "-n")) {
        auto size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            cout << "incorrect numer of Films = "
                << size
                << ". Set 0 < number <= 10000\n";
            return 3;
        }
        // системные часы в качестве инициализатора
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных чисел
        InRnd(c, size);
    }
    else {
        errMessage2();
        return 2;
    }
    // Вывод содержимого контейнера в файл
    ofstream ofst1(argv[3]);
    ofst1 << "Filled Container:\n";
    Out(c, ofst1);
    //cout << "out";
    // The 2nd part of task
    ofstream ofst2(argv[4]);
    ofst2 << "Sorted Container: \n";
    Film_sort(c);
    Out(c, ofst2);

    Clear(c);
    cout << "Stop" << endl;
    return 0;
}
