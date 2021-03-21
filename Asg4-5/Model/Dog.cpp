#include "pch.h"
#include "Dog.h"

Dog::Dog()
{
}

Dog::Dog(string breed, string name, string photo, int age)
{
	this->breed = breed;
	this->name = name;
	this->photograph = photo;
	this->age = age;
}

Dog::Dog(Dog & element)
{
	this->breed = element.breed;
	this->name = element.name;
	this->photograph = element.photograph;
	this->age = element.age;
}

Dog::~Dog()
{
}

string Dog::GetBreed()
{
	return this->breed;
}

string Dog::GetName()
{
	return this->name;
}

string Dog::GetPhotograph() 
{
	return this->photograph;
}

int Dog::GetAge()
{
	return this->age;
}

void Dog::SetBreed(string breed)
{
	this->breed = breed;
}

void Dog::SetName(string name)
{
	this->name = name;
}

void Dog::SetPhotograph(string photo)
{
	this->photograph = photo;
}

void Dog::SetAge(int age)
{
	this->age = age;
}

string Dog::ToString() const
{
	return  " Name: "+this->name +
			" Breed: " + this->breed +
			" Age: " + GetAgeToString() +
			" Photo: " + this->photograph +
			"\n";
}
