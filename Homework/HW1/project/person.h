#pragma once

#include <iostream>
#include <cstring>

class Person
{
private:
    char *name;
    int age;

public:
    // Default Constructor
    Person();

    // Parameterized Constructor
    Person(const char *name, int age);

    // Destructor
    ~Person();

    // Copy Constructor
    Person(const Person &other);

    // Copy Assignment Operator
    Person &operator=(const Person &other);

    // Method to Print Person's Information
    void print() const;

    // Getters for Name and Age
    const char *getName() const;
    int getAge() const;
};
