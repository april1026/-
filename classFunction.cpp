#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Car {
	public:
		int No;
		static int Total;
		static void ShowTotalCars() {
			cout << "現在共有 " << Total << " 部車子" << endl;
		}
		void ShowMe(string vCarName) {
			cout << vCarName << " 是第 " << No << " 部車" << endl;
		}
		Car() {
			Total += 1;
			No = Total;
		}
		~Car() {
			Total -= 1;
		}
};
int::Car::Total = 0;
int main() {
	Car::ShowTotalCars();
	Car Benz;
	cout << "Benz 是第 " << Benz.No << " 部車" << endl;
	Car::ShowTotalCars();
	Car BMW;
	Car Ford;
	BMW.ShowMe("BMW");
	Ford.ShowMe("Ford");
	Car::ShowTotalCars();
	Car *MyCar;
	Car::ShowTotalCars();
	MyCar = &BMW;
	MyCar -> ShowMe("MyCar");
	
	return 0;
} 
