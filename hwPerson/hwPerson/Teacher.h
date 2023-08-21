#pragma once
#include "Person.h"
class Teacher :
    public Person
{
private:
    string subject;
public:
    Teacher(string subject);
    string info(string subject);
};

