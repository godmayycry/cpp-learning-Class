#include <iostream>

using namespace std;

class Building;
class Car;
class Person {
private:
	int age_person;
	string name_person, job_person;
public:

	friend void info_building_person(Person& person, Building& buildin);

	Person(int age_person, string name_person, string job_person) {
		this->age_person = age_person;
		this->name_person = name_person;
		this->job_person = job_person;
	}

	friend void info_car_person(Car& car, Person& person);

	void get_info_person() {
		cout << "Person: " << "Age: " << age_person << ". Name: " << name_person << ". Job: " << job_person << '.' << endl;
	}

};

class Car {
private:
	int year_car;
	string name_car, color_car;
public:
	Car(int year_car, string name_car, string color_car) {
		this->year_car = year_car;
		this->name_car = name_car;
		this->color_car = color_car;
	}

	friend void info_car_person(Car& car, Person& person);

	void get_info_car() {
		cout << "Car: " << "Years: " << year_car << ". Name: " << name_car << ". Color: " << color_car << '.' << endl;
	}
};

class Building {
private:
	int year_building;
	string name_building, color_building;
	float HP_procent_building;

public:

	friend void info_building_person(Person& person, Building& buildin);

	Building(int year_building, string name_building, float HP_procent_building, string color_building) {
		this->year_building = year_building;
		this->name_building = name_building;
		this->HP_procent_building = HP_procent_building;
		this->color_building = color_building;
	}

	void get_info_building() {
		cout << "Building: " << "Type: " << name_building << ". Color: " << color_building << ". Year: " << year_building << ". HP: " << HP_procent_building << '%' << endl;
	}
};

void info_car_person(Car& car, Person& person) {
	cout << "Person " << person.name_person << " has a car " << car.name_car << endl;
}

void info_building_person(Person& person, Building& building) {
	cout << "Person " << person.name_person << " has a build " << building.name_building << endl;
}

class PC {
private:
	string os;
	float HP_procent_PC;
public:
	PC(float HP_procent_PC, string os) {
		this->HP_procent_PC = HP_procent_PC;
		this->os = os;
	}
	void get_info_PC() {
		cout << "Computer: " << "OS: " << os << ". HP: " << HP_procent_PC << '%';
	}
};

class Laptop : public PC {
private:
	float weight;
public:
	Laptop(float HP_procent_PC, string os, float weight): PC(HP_procent_PC, os) {
		this->weight = weight;
	}
	void get_info_PC() {
		PC::get_info_PC();
		cout << ". Weight: " << weight;
	}
};

int main() {

	Person john(28, "John", "Sport");
	john.get_info_person();

	Car bmw(2000, "BMW", "Black");
	bmw.get_info_car();

	info_car_person(bmw, john);

	Building house(2000, "House", 88.8f, "Ruby");
	house.get_info_building();

	info_building_person(john, house);

	Laptop mac(98.2f, "mac", 2.8f);
	mac.get_info_PC();

	return 0;
}