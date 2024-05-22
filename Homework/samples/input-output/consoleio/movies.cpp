#include <stdexcept>
#include "movies.h"

using std::exception;
using std::string;

void Movie::set_title(string title_param)
{
    title = title_param;
}

string Movie::get_title() const
{
    return title;
}

string Movie::get_title_upper() const
{
    string title_upper;
    for (char c : title)
    {
        title_upper.push_back(toupper(c));
    }
    return title_upper;
}

void Movie::set_year(int year_param)
{
    if (year_param < 1888)
    {
        throw std::invalid_argument("Year must be 1888 or later.");
    }
    year = year_param;
}

int Movie::get_year() const
{
    return year;
}

bool Movie::equals(const Movie &to_compare)
{
    return (title == to_compare.title && year == to_compare.year);
}

string Movie::to_str() const
{
    return title + " (" + std::to_string(year) + ')';
}