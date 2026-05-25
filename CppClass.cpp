#include <iostream>

using namespace std;

class Building {
private:
	int year;
	string type, color;
	float HP_procent;

public:

	Building(int y, string t, float hp, string c) {
		year = y;
		type = t;
		color = c;
		HP_procent = hp;
	}

	void get_info() {
		cout << "Type: " << type << ". Color: " << color << ". Year: " << year << ". HP: " << HP_procent << '%' << endl;
	}
};

int main() {

	Building school(1999, "School", 68.4f, "Yellow");
	school.get_info();

	Building house(2020, "House", 89.6f, "Blue");
	house.get_info();

	return 0;
}