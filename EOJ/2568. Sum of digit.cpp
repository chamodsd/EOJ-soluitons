#include <iostream>
using namespace std;

int EOJ_solution_2568(void) {
	int n;
	int dig;
	long long res;
	long long x1, x2;
	cin >> n;
	for (int i = 0;i < n;i++) {
		dig = 1;
		cin >> x1 >> x2;
		res = x1 + x2;
		while ((res / 10) != 0) {
			res /= 10;
			dig++;
		}
		cout << dig << endl;
	}
	return 0;
}