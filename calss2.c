#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class employee {
	public :
		string name;
		int salary;
		employee() {
		}
	employee(string names, int salary) {
		this -> name = name;
		this -> salary = salary;
	}
	~employee() {
		cout << "員工 ->" << name << "被刪除了" << endl;
	}
	void showEmployee() {
		cout << "員工姓名 : " << name << "  薪資 : " << salary << endl;
	}
};

int main() {
	employee *ptr1, *ptr2;
	ptr1 = new employee;
	ptr1 -> name = "王建名";
	ptr1 -> salary = 75000;
	ptr1 -> showEmployee();
	ptr2 = new employee("溫婕宇", 65000);
	ptr2 -> showEmployee();
	
	cout << "delete ptr1";
	delete ptr1;
	cout << "delete ptr2";
	delete ptr2;
	
	return 0;
}
