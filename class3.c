#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class MathA {
	public:
		int GetMax (int a, int b) {
			return (a > b) ? a : b;
		}
};

class MathB {
	public:
		int GetAbs (int a) {
			return (a > 0) ? a : -a;
		}
};

class MathC: public MathA, public MathB {
	public:
		int GetFactorial(int a) {
			if (a == 0) {
				return 1;
			} else {
				return (a * GetFactorial(a-1));
			}
		}
};

int main() {
	MathC objC;
	cout << "100 和 65 最大值是 : " << objC.GetMax(100, 65) << endl;
	cout << "-99 的絕對值 : " << objC.GetAbs(-99) << endl;
	cout << "5 ! : " << objC.GetFactorial(5) << endl;
	
	return 0;
}
