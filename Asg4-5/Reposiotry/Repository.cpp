#include "pch.h"
#include "Repository.h"

Repository::Repository()
{
}

Repository::~Repository()
{
}

void Repository::AddDod(Dog D)
{
	this->List.PushBack(D);
}

void Repository::Update(Dog D, int index)
{
	this->List[index] = D;
}

Dog Repository::GetDog(int index)
{
	return this->List[index];
}

DynamicVector<Dog> Repository::GetList()
{
	return this->List;
}
