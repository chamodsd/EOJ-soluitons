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
		//���������㷨��շת��������˴�ѡ��շת�����
		temp = gcd(a, b);
		cout << temp << " " << a * b / temp << endl;
	}
	return 0;
}