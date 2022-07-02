#include"pch.h"
#include<iostream>
#include<string>
using namespace std;

class Human {
public:
	
	
	void SetAge(int Age) {
		this->Age = Age;
		if (this->Age <=0) {
			throw exception("Ошибка!!!!! Не корректный возраст!!!\n");
		}
		

	}
	int GetAge()const noexcept {

		return Age;
	}
	void SetName(string Name) {
		this->Name = Name;
		if (Name.size() <= 2) {
			throw exception("Ошибка мало символов для имени!!!!\n");
		}
	}
	string GetName()const noexcept {
		return Name;
	}
	void SetSurname(string Surname) {
		this->Surname = Surname;
		if (Surname.size() <= 2 ) {
			throw exception("Ошибка!!!! Не корректная фамилия!!!\n");
		}
		
	}
	string GetSurname()const noexcept {
		return Surname;
	}
	void SetPatronamic(string Patronamic) {
		this->Patronamic = Patronamic;
		if (Patronamic.size() <= 2) {
			throw exception("Ошибка!!!! Не корректное отчество!!!\n");
		}

	}
	string GetPatronamic()const noexcept {
		return Patronamic;
	}
	string Fullname() {
		string str;

		str = Surname + " " + Name + " " + Patronamic + "\n";

		return str;
	}

private:
	int Age;
	string Name;
	string Surname;
	string Patronamic;

};



int main() {


	string name, surname, patronamic;
	int age;
	system("chcp 1251>nul");
	Human first;
	cout << "Введите возраст: ";
	cin >> age;
	try {
		first.SetAge(age);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}

	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, name);
	try {
		first.SetName(name);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}

	cout << "Введите Фамилию: ";
	getline(cin, surname);
	try {
		first.SetSurname(surname);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}

	cout << "Введите отчество: ";
	getline(cin, patronamic);
	try {
		first.SetPatronamic(patronamic);
	}
	catch (exception& ex) {
		std::cerr << ex.what();
	}






	







	system("pause>nul");
	return 0;
}