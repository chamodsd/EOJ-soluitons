#include <iostream>
using namespace std;

int abs(int a) {
	if (a < 0)return (-1) * a;
	else return a;
}

int EOJ_solution_2031(void) {
	int n;
	int a[100];
	while (cin >> n) {
		for (int i = 0;i < n;i++) {	//input
			cin >> a[i];
		}
		for (int i = 0;i < n;i++) {	//sort(abs)
			for (int j = 0;j < n - i - 1;j++) {
				if (abs(a[j]) > abs(a[j + 1]))swap(a[j], a[j + 1]);
			}
		}
		for (int i = 0;i < n;i++) {
			cout << a[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}