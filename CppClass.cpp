#include <iostream>

using namespace std;

class Car;
class Person {
private:
	int age_person;
	string name_person, job_person;
public:

	Person(int a, string n, string j) {
		set_data_person(a, n, j);
	}

	void set_data_person(int a, string n, string j) {
		age_person = a;
		name_person = n;
		job_person = j;
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
	Car(int y, string n, string c) {
		set_data_car(y, n, c);
	}

	friend void info_car_person(Car& car, Person& person);

	void set_data_car(int y, string n, string c) {
		year_car = y;
		name_car = n;
		color_car = c;
	}
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

	Building(int y, string t, float hp, string c) {
		set_data_building(y, t, hp, c);
	}

	void set_data_building(int y, string n, float hp, string c) {
		year_building = y;
		name_building = n;
		color_building = c;
		HP_procent_building = hp;
	}

	void get_info_building() {
		cout << "Building: " << "Type: " << name_building << ". Color: " << color_building << ". Year: " << year_building << ". HP: " << HP_procent_building << '%' << endl;
	}
};

void info_car_person(Car& car, Person& person) {
	cout << "Person: " << person.name_person << " has a car " << car.name_car << endl;
}

int main() {

	Person john(28, "John", "Sport");
	john.get_info_person();

	Car bmw(2000, "BMW", "Black");
	bmw.get_info_car();

	info_car_person(bmw, john);

	return 0;
}