#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class employee {
	public :
		string name;
		int salary;
};

int main() {
	int num;
	cout << "請輸入員工的人數 : ";
	cin >> num;
	employee *ptr;
	ptr = new employee[num];
	cout << "請輸入" << num << "位員工的姓名與薪資 : " << endl;
	for (int i = 1; i <= num; i++) {
		cout << "第" << i << "位員工的姓名 : ";
		cin >> ptr -> name;
		cout << "第" << i << "位員工的薪資 : ";
		cin >> ptr -> salary;
		ptr++;
	}
	cout << "\n印出所有員工的姓名與薪資\n";
	cout << "編號\t姓名\t薪資\n";
	cout << "=====================\n";
	ptr -= num;
	for (int i = 1; i <=  num; i++) {
		cout << i << "\t" << ptr -> name << "\t" << ptr -> salary << endl;
		ptr++;
	}
	
	return 0;
}
