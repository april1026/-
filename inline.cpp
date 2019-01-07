#include <iostream>
using namespace std;

inline double getmin (double, double);
inline int getmin (int, int);
inline char getmin (char, char);

int main () {
	int n1, n2;
	cout << "請輸入兩個整數:";
	cin >> n1 >> n2;
	cout << n1 << " 與 " << n2 << " 中最小數為 " << getmin(n1, n2) << endl << endl; 
	
	double d1, d2;
	cout << "請輸入兩個浮點數:";
	cin >> d1 >> d2;
	cout << d1 << " 與 " << d2 << " 中最小數為 " << getmin(d1, d2) << endl << endl;
	
	char c1, c2;
	cout << "請輸入兩個字元:";
	cin >> c1 >> c2;
	cout << 1 << " 與 " << c2 << " 中最小字元為 " << getmin(c1, c2) << endl << endl;
	return 0;
}
inline double getmin (double x, double y) {
	return x < y ? x : y;
}
inline int getmin (int x, int y) {
	return x < y ? x : y;
}
inline char getmin (char x, char y) {
	return x < y ? x : y;
}
