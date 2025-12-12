// MyUtils.h

#ifndef MYUTILS_H
#define MYUTILS_H

#include <string>
#include <film.h>

void count_average_rating(Film& film);
void print(Film& film);
void print(vector<Film>& films);
vector<string> getParts(string line);
void writeFilmsIntoFile(vector<Film> films, string name);
void readFilmsFromFileAndCout(string name);
vector<Film> readFilmsFromConsole(int m);

#endif
