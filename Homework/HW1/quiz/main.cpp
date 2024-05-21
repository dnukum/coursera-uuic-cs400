#include <iostream>

using namespace std;

/*
    STRINGS in C
        In C, string are represented as char arrays and is always terminated by '\0'.
        Thus we don't need to pass the length of the strings into the funtions like we did with
        int arrays.

        For exmample,
        char * s = "Random" is short form of 
        char * s = {'R', 'a', 'n', 'd', 'o', 'm', '\0'};

        Note that the last character of the string is always '\0'
        The length of string s is 6, we dont count the '\0'
        If you create a new string, make sure to terminate the string with '\0'
        Enclosing the a characters of string within " " will automatically add the '\0'
*/

// Helper function
//
void printStr(char *s)
{
    if (s == nullptr)
        return;

    while (*s != '\0')
    {
        cout << *s;
        s++;
    }
}

// -----------------------------------------------------------------
//
//      Problem 1
//
//-------------------------------------------------------------------
/*
 *   stringLength retunrs the number of characters in the string.
 *   stringLength("Hello World") will return 11, which include the space between the Hello and World.
 *   If the function is passed in nullptr, it should return -1.
 *   If the function is passed an emptry string,  it should return 0
 */
int stringLength(char * s) {

        // TO DO
}


void test_stringLength() {

    cout << stringLength("Hello World") << endl;
    cout << stringLength("") << endl;
    cout << stringLength(nullptr) << endl;
}

// -----------------------------------------------------------------
//
//      Problem 2
// 
//-------------------------------------------------------------------
/*
*   compareString function compares the character strings s and t, and returns negative, zero or positive if s is lexicographically less than, equal
*   to, or greater than t. The return value is obtained by subtracting the characters at the first position where s and t disagree.
*/
int compareStrings(char * s, char * t) {



}

void test_compareStrings() {

    char *a = "Hello World";
    char *b = "Hello World";

    cout << compareStrings(a, b) << endl;

    a = "abcdedfghijks";
    b = "abcdedfgijdks";

    cout << compareStrings(a, b) << endl;

    a = "ABC";
    b = "";

    cout << compareStrings(a, b) << endl;
}

//
//  Problem 3
//

/* 
*   strcat: concatenate t to end of s; s must be big enough 
*
*   strcat ("hello", " world") will produce "hello world"
*/

void strcat (char * s, char * t){
    // TO DO
}


void test_strcat() {
    char s[50] = "Hello";
    strcat(s, " World");
    cout << s << endl;
}

/******************************************************
*   Problem 4
*       Create a copy of string s. The memory is allocated on the heap. The caller is reponible 
*       for freeing the memory
*   
*******************************************************/

char * copyString(char * s)
{
    // TO DO

}


void test_copyString()
{
    char *t = "This is a string";
    char *p = copyString(t);

    cout << "Original String: ";
    printStr(t);
    cout  << "[Address: " << t << "]\n";
    cout << "New String: ";
    printStr(p);
    cout << "[Address: " << p << "]\n";

    // Deallocating the heap memory. (Assuming it was made on the heap!)
    delete p;

}

/***********************************************
*   Problem 6
*       reverseStr(char * s)
*           reverseString("Track") should modify input 's' to "kcarT"
*
*************************************************/


void reverseStr(char * s) {
    // TO DO
}

void test_reverseStr() {
    char *p = "She sells the sea shells on the sea shore";
    printStr(p);
    cout << endl;
    reverseStr(p);
    printStr(p);
    cout << endl;
}

/******************************************************
Problem 7
*******************************************************/

class Pair {
public:
    int first;
    int second;
};

// Insert your declaration and implementation of the function pairFactory()
// below, by replacing "..." with proper C++ code. Be sure to declare the
// function type to return a pointer to a Pair.
Pair *pairFactory()
{
    // TO DO
    // (You can use as many lines as you want.)
}

int test_pairFactory()
{
    Pair *p;
    p = pairFactory();

    // Deallocating the heap memory. (Assuming it was made on the heap!)
    delete p;

    return 0;
}

int main() {

    test_stringLength();

    test_compareStrings();

    test_strcat();

    test_copyString();

    test_pairFactory();

    return 0;
}

/******************************************************
Problem 8
*******************************************************/
//
class Point
{
public:
    int x, y;

    //  constructor
    Point(int a, int b)
    {
        // Your code here
    }
};

int main()
{
    Point p(10, 20);
    std::cout << p.x << " " << p.y; // Expected output: 10 20
    return 0;
}
