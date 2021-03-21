#include "pch.h"
#include "Ui.h"

Ui::Ui()
{
}

Ui::~Ui()
{
}

void Ui::AddDog()
{
	string name, breed, photo;;
	int age;
	cout << "Name:"; cin >> name;
	cout << "Breed:"; cin >> breed;
	cout << "Photography:"; cin >> photo;
	cout << "Age:"; cin >> age;
	Dog D(name, breed, photo, age);
	this->controller.AddDog(D);
}

void Ui::PrintAllDogs()
{

	for (size_t i = 0; i < controller.GetAllDogs().Size(); i++)
		cout<<controller.GetAllDogs()[i].ToString();

}

void Ui::PrintMenu()
{
	cout << "1.Add a Dog\n";
	cout << "2.Print All Dogs\n";
	cout << "0.Exit\n";
	cout << "->";
}

void Ui::Run()
{
	int option;
	PrintMenu();
	cin >> option;
	while (option != 0)
	{
		switch (option) {
		case 1:
			AddDog();
			break;
		case 2:
			PrintAllDogs();
			break;
		}
		system("pause");
		system("CLS");
		PrintMenu();
		cin >> option;
	}
}
