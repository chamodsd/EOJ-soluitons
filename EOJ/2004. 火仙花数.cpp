#include <iostream>
using namespace std;

int EOJ_solution_2004(void) {
	int flag = 0;
	int a[4] = { 0 };
	for (int i = 1000;i <= 9999;i++) {
		a[0] = i / 1000;
		a[1] = i % 1000 / 100;
		a[2] = i % 100 / 10;
		a[3] = i % 10;
		for (int j = 0;j < 2;j++) {
			for (int k = -0;k < 4;k++)a[k] *= a[k];
		}
		if (i == a[0] + a[1] + a[2] + a[3]) { cout << i << endl;flag = 1; }
	}
	if (flag == 0)cout << "no answer";

	return 0;
}