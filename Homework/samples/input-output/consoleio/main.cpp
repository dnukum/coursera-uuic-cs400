#include <vector>
#include <iostream>
#include <iomanip>

#include "movies.h"

using std::cin, std::cout, std::endl;
using std::left, std::setw, std::vector;

int main()
{
    cout << "The Movie List program\n\n"
         << "Enter a movie...\n\n";

    // get vector of Movie objects
    vector<Movie> movies;
    char another = 'y';
    while (tolower(another) == 'y')
    {
        Movie movie;

        string title;
        cout << "Title: ";
        getline(cin, title);
        movie.set_title(title);

        int year;
        cout << "Year: ";
        cin >> year;
        try
        {
            movie.set_year(year);
        }
        catch (const std::invalid_argument &e)
        {
            cout << e.what() << "\n";
            cout << "Exiting program...\n\n";
            return 0;
        }

        movies.push_back(movie);

        cout << "\nEnter another movie? (y/n): ";
        cin >> another;
        cin.ignore();
        cout << endl;
    }

    // display the movies
    const int w = 10;
    cout << std::left
         << setw(w * 3) << "TITLE"
         << setw(w) << "YEAR" << endl;
    for (Movie movie : movies)
    {
        cout << setw(w * 3) << movie.get_title()
             << setw(w) << movie.get_year() << endl;
    }
    cout << endl;
}