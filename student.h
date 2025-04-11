#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class Student {
public:
	string last_name;
	string first_name;
	string fathers_name;
	int age;
	string gender;
	Student() = default;

	Student(string plast_name, string pfirst_name, string pfathers_name, int page, string pgender) {
		last_name = plast_name;
		first_name = pfirst_name;
		fathers_name = pfathers_name;
		age = page;
		gender = pgender;
	}
	void PrintInfo() {
		cout << "Your data : " << last_name << " " << first_name << " " << fathers_name << " " << age << " " << gender << '\n';
	}
};
