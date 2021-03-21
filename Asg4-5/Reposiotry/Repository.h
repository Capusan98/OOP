#pragma once
#include"DynamicVector.h"
#include"Dog.h"
#include<string>
using namespace std;


class Repository{
private:
	DynamicVector<Dog> List;

public:
	Repository();
	~Repository();
	
	void AddDod(Dog D);
	void Update(Dog D, int index);
	Dog GetDog(int index);
	//TO DO: Delete
	DynamicVector<Dog> GetList();
	

};