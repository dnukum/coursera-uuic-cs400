#include <iostream>
#include <string>

#include "Date.h"

using namespace std;

int main()
{

    // Sample hard coded test values. These inputs are not exhaustive to test the correctnes of the 
    // program. You should test the program for all edge caases and bad input.
    const int SIZE = 8;
    Date date;

    int year[] = {2012, 1996, 2015, 2000, 1980, 2001, 2017, 2011};
    int month[] = {1, 3, 6, 9, 12, 11, 10, 9};
    int day[] = {1, 10, 20, 22, 25, 22, 31, 23};

    for (int i = 0; i < SIZE; i++)
    {
        date.setDate(year[i], month[i], day[i]);
        cout << date.getDate() << " is in the " + date.getSeason() << " season." << endl;
        cout << endl;
    }

    //
    // console based UI
    // TO DO:

    return 0;
}