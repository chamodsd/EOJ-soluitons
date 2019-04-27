#include <iostream>
using namespace std;

int EOJ_solution_1828() {
	int temp;
	cin >> temp;
	while (temp != -1) {
		printf("%.2d:", temp / 3600);
		temp %= 3600;
		printf("%.2d:", temp / 60);
		temp %= 60;
		printf("%.2d\n", temp);
		cin >> temp;
	}
	return 0;
}