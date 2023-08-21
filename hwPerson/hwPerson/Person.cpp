#include "Person.h"
Person::Person() {
	name = "";
	age = 0;
}
Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}
string Person::getName(string name){
	return name;
}
int Person::getAge(int age) {
	return age;
}
