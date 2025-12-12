// ConsoleUtils.cpp

#include <film.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void count_average_rating(Film& film);

vector<Film> readFilmsFromConsole(int m)
{
    vector<Film> films;

    for (int i = 0; i < m; i++)
    {
        Film film;

        cout << "Введите название фильма: ";
        getline(cin, film.name);
        cout << endl;

        cout << "Введите год выхода фильма: ";
        string year_line;
        getline(cin, year_line);
        cout << endl;
        film.year = stoi(year_line);

        cout << "Введите страну производства фильма: ";
        getline(cin, film.country);
        cout << endl;

        string rating_line;
        cout << "Введите оценки (массив из пяти элементов, например, 6 5 7 6 8) фильма: ";
        getline(cin, rating_line);
        cout << endl;

        stringstream ss(rating_line);
        string word;
        vector<int> rating;

        while (ss >> word) {
            rating.push_back(stoi(word));
        }

        film.rating = rating;
        count_average_rating(film);

        films.push_back(film);
    }

    return films;
}