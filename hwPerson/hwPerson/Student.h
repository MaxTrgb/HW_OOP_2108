#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    int grades[3];
public:
    Student(int grades[3]);
    double average(int grades[3]);
};

