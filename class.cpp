#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Employee {
	protected:
		int salary;
	public:
		int getSalary() {
			return salary;
		}
		void setSalary(int value) {
			if ((value >= 20000) & (value <= 40000)) {
				salary = value;
			} else {
				salary = 20000;
			}
		}
		void showTotal() {
			cout << "底薪 : " << getSalary() << endl;
		}
};

class Manager : public Employee {
	public:
		int bonus;
		int getSalary() {
			return salary;
		}
		void setSalary(int value) {
			if ((value >= 30000) & (value <= 60000)) {
				salary = value;
			} else {
				salary = 30000;
			}
		}
		void showTotal() {
			Employee::showTotal();
			cout << "薪水 + 獎金 : " << bonus+getSalary() << endl;
		}
};

int main() {
	Employee tom;
	tom.setSalary(40000);
	cout << "tom 員工薪水 " << tom.getSalary() << endl;
	tom.showTotal();
	cout << "=====================\n\n";
	Manager peter;
	peter.setSalary(70000);
	tom.setSalary(40000);
	cout << "peter 經理薪水 " << peter.getSalary() << endl;
	peter.bonus = 30000;
	cout << "peter 經理獎金 " << peter.bonus << endl;
	peter.showTotal();
	
	return 0;
}
