#pragma once
#include "Repository.h"
 
using namespace std;

class Controller {
private:
	Repository repo;
public:
	Controller();
	~Controller();
	void AddDog(Dog D);
	void UpdateDog(Dog D,int index);
	//void DeleteDog();
	DynamicVector<Dog> GetAllDogs();
};