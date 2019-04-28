#include <iostream>
using namespace std;

int EOJ_solution_2581(void){
	int n;
	int count_1, count_0;
	long long temp;
	cin >> n;
	for (int i = 0;i < n;i++) {
		count_0 = 0;
		count_1 = 0;
		cin >> temp;
		while ((temp / 2) != 0) {
			if (temp % 2 == 1)count_1++;
			else count_0++;
			temp /= 2;
		}
		if (temp == 1)count_1++;
		else count_0++;
		cout << count_0 << " " << count_1 << endl;
	}
	return 0;
}