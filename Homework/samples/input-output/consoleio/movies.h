#pragma once

#include <string>
using std::string;

class Movie
{
private:
    string title = "";
    int year = 0;

public:
    void set_title(string);
    string get_title() const;
    string get_title_upper() const;
    void set_year(int);
    int get_year() const;
    bool equals(const Movie &);
    string to_str() const;
};