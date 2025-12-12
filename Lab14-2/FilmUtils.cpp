// FilmUtils.cpp

#include <film.h>
#include <string>
#include <iostream>

using namespace std;

void count_average_rating(Film& film)
{
    double sum = 0.0;
    int n = film.rating.size();

    for (int i = 0; i < n; i++)
    {
        sum += film.rating[i];
    }

    film.average_rating = sum / n;
}

void print(Film& film)
{
    cout << "=== Фильм =======" << endl;
    cout << film.name << endl;
    cout << film.year << endl;
    cout << film.country << endl;
    cout << film.average_rating << endl;
    for (int i = 0; i < film.rating.size(); i++)
    {
        cout << film.rating[i] << " ";
    }
    cout << endl << endl;
}

void print(vector<Film>& films)
{
    cout << endl << "> Список фильмов <" << endl;
    for (int i = 0; i < films.size(); i++)
    {
        print(films[i]);
    }
}
