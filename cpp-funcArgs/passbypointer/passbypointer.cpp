#include <iostream>

using std::cout;
using std::endl;

void swap(int *a, int *b)
{
    cout << "Argument Address:" << endl;
    cout << "   a: " << a << "      b: " << b << endl << endl;

    cout << "Before Swapping:" << endl;
    cout << "   *a: " << *a << "    *b: " << *b << endl << endl;
    
    int temp;
    temp = *a;
    
    *a = *b;
    *b = temp;
    
    cout << "After Swapping:" << endl;
    cout << "   *a: " << *a << "    *b: " << *b << endl << endl;
}

int main ()
{
    int x = 10, y = 20;
    swap(&x, &y);
    cout << "main function\n";
    cout << "   x: " << x << "      y: " << y << endl;
}