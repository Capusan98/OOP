#pragma once
#include <string>

using namespace std;

class Dog {
private:
	string breed;
	string name;
	string photograph;
	int age;

public:
	//constructors
	 Dog();
	 Dog(string, string, string, int);
	 Dog(Dog& element);
	 ~Dog();
	 //Getters
	 string GetBreed();
	 string GetName();
	 string GetPhotograph();
	 int GetAge();
	 string GetAgeToString() const { string s = to_string(this->age); return s; };
	 //setters
	 void SetBreed(string);
	 void SetName(string);
	 void SetPhotograph(string);
	 void SetAge(int);
	 //helper
	 string ToString() const ;
	 
};