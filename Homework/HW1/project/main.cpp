#include "Person.h"

int main()
{
    // Test default constructor
    Person person1;
    person1.print(); // Should print: Name: No Name, Age: 0

    // Test parameterized constructor
    Person person2("John Doe", 30);
    person2.print(); // Should print: Name: John Doe, Age: 30

    // Test copy constructor
    Person person3 = person2;
    person3.print(); // Should print: Name: John Doe, Age: 30

    // Modify the copied object
    person3 = Person("Jane Doe", 25);
    std::cout << "After modifying the copied object:" << std::endl;
    person3.print(); // Should print: Name: Jane Doe, Age: 25
    person2.print(); // Should still print: Name: John Doe, Age: 30

    // Test copy assignment operator
    Person person4;
    person4 = person2;
    person4.print(); // Should print: Name: John Doe, Age: 30

    // Modify the assigned object
    person4 = Person("Alice", 40);
    std::cout << "After modifying the assigned object:" << std::endl;
    person4.print(); // Should print: Name: Alice, Age: 40
    person2.print(); // Should still print: Name: John Doe, Age: 30

    return 0;
}
