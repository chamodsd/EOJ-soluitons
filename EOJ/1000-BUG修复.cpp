#include <iostream>
#include <math.h>
using namespace std;

int EOJ_solution_1026() {
	double time, n, h;				//nΪ������hΪ�߶�
	while (cin >> n && n != 0) {
		n--;						//3��Ӧ����2��ĸ߶�
		if (n <= 2)h = 5 * n + 1.75;
		else h = 5 * 2 + 3 * (n - 2) + 1.75;
		time = sqrt(2 * h / 9.8);
		printf("%.3f\n", time);		//ע������ı���
	}
	return 0;
}