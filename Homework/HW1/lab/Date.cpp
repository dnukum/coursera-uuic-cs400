#include <string>

#include "Date.h"

using std::to_string;

Date::Date()
{
    year = 1970;
    month = 1;
    day = 1;
}

string Date::getDate() const
{
    string formattedYear = to_string(year);
    string formattedMonth = (month < 10) ? "0" + to_string(month) : to_string(month);
    string formattedDay = (day < 10) ? "0" + to_string(day) : to_string(day);
    string formattedDate = formattedMonth + "/" + formattedDay + "/" + formattedYear;
    return formattedDate;
}

// All other methods are to be implemented