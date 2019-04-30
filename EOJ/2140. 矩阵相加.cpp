#include <iostream>
using namespace std;

int EOJ_solution_2140(void) {
	//由于没有变长数组，考虑使用一维数组来表示矩阵。
	//对于a行b列的矩阵，即0~b-1序号的元素为第一行的元素；b~2b-1为第二行元素……
	int n;
	int a, b;
	int temp1[1000000];//矩阵1
	int temp2[1000000];//矩阵2
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >> b;//a行b列
		for (int j = 0;j < a * b;j++) cin >> temp1[j];
		for (int j = 0;j < a * b;j++) cin >> temp2[j];
		for (int j = 0;j < a * b;j++) temp1[j] += temp2[j];

		for (int j = 0;j < a;j++) {
			for (int k = 0;k < b;k++) {
				cout << temp1[k + j * b];
				if (k != b - 1)cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
