#include "Student.h"


Student::Student(int grades[3]) {

	for (int i = 0; i < 3; i++)
	{
		this->grades[i] = grades[i];
	}
}
double Student::average(int grades[3]) {

	int sum = 0;
	double av = 0.0;
	for (int i = 0; i < 3; i++)
	{
		sum += grades[i];
	}
	return av = sum / 3;
}
