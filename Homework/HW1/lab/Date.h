#pragma once


using namespace std;

class Date
{
public:
    Date();              // default constructor
    Date(int y, int m, int d); // overloaded constructor

    void setDate(int, int, int); // set year, month, day of Date obj

    string getDate() const;   // return the date in mm/dd/yyyy format
    string getSeason() const; // return season in string based on the date

private:
    int year;
    int month;
    int day;
};