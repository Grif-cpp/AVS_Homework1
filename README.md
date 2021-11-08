# AVS_Homework1
Доброго времени суток, моя домашка по АВС (Иванов Григорий БПИ201)                                                    
К сожалению с CMake я не дружу, поэтому собирал проект так:                                               
Команды для консоли Windows:                                                
g++ -c Cartoon.cpp Gaming.cpp Documental.cpp Film.cpp Container.cpp main.cpp                                            
g++ Cartoon.o Gaming.o Documental.o Film.o Container.o main.o -o hw1   
                                                                                        
файловый ввод .\hw1 -f test05.txt Out.txt Out1.txt                                                                                      
случайный ввод .\hw1 --n 100 Out.txt Out1.txt                                                       
                                                                                          
Описание ввода в файле Description
время выполнения на случайных данных(количество фильмов 10000) 0.250-0.260 сек                                                
время выполнения программы на каждом тесте 0.001-0.015 сек, замерял время так:                                           
#include<time.h>                                              
clock_t start = clock();                                                    
// программа                                                        
clock_t end = clock();                                              
double seconds = (double)(end - start) / CLOCKS_PER_SEC;                                
cout << seconds;                                    
