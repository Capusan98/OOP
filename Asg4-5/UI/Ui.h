#pragma once
#include "Controller.h"
#include<iostream>;
using namespace std;

class Ui {
private:
	Controller controller;
public:
	Ui();
	~Ui();
	void AddDog();
	//void UpdateDog();
	//void DeleteDog();
	void PrintAllDogs();
	void PrintMenu();
	void Run();
};