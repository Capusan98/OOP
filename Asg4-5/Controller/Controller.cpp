#include "pch.h"
#include "Controller.h"

Controller::Controller()
{
}

Controller::~Controller()
{
}

void Controller::AddDog(Dog D)
{
	this->repo.AddDod(D);
}

void Controller::UpdateDog(Dog D, int index)
{
	this->repo.Update(D, index);
}

DynamicVector<Dog> Controller::GetAllDogs()
{
	return this->repo.GetList();
}


