#include <iostream>
using namespace std;

int EOJ_solution_3296(void) {
	int n;
	int temp;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> temp;
		cout << temp / 3 << endl;
	}
	return 0;
}