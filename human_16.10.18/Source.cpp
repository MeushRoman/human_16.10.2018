#include <iostream>
#include <Windows.h>

using namespace std;

class human {
	char *name;
	bool sex;
	int age;

public:
	human(const char *h_name, bool h_sex, int h_age) {
		
		setName(h_name);
		setSex(h_sex);
		setAge(h_age);
	}

	void info() {
		cout << "name: " << name << endl << "sex: ";
		if (sex = 0) cout << "Woman"; else cout << "Man";
		cout << endl << "age: " << age << endl;
	}

	void setName(const char *h_name) {
		delete[]name;
		name = new char[strlen(h_name) + 1];
		strcpy_s(name, strlen(h_name) + 1, h_name);
	}

	void setSex(bool h_sex) {
		sex = h_sex;
	}

	void setAge(int h_age) {
		age = h_age;
	}

	char* getName() {
		return name;
	}

	bool getSex() {
		return sex;
	}

	int getAge() {
		return age;
	}


	~human() {
		delete[]name;
	}
};

void main() {

	human h("Bob", 1, 20);
	h.info();

	h.setName("KOLOLO");
	
	h.info();
	cout << h.getName();



	system("pause");
}