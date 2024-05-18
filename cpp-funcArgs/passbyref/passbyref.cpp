#include <iostream>

using std::cout;
using std::endl;

// PASS BY REFERENCE
void swap(int &a, int &b)  
{
    cout << "Before Swapping:" << endl;
    cout << "a: " << a << " b: " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping:" << endl;
    cout << "a: " << a << " b: " << b << endl;
}

int main ()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << "x: " << x << " y: " << y << endl;
}