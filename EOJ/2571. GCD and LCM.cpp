#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a%b != 0) return gcd(b, a%b);
	else return b;
}

int EOJ_solution_2571(void) {
	int a, b;
	int n;
	int temp;
	cin >> n;
	while (cin >> a >> b) {
		//可用蛮力算法与辗转相除法，此处选用辗转相除法
		temp = gcd(a, b);
		cout << temp << " " << a * b / temp << endl;
	}
	return 0;
}