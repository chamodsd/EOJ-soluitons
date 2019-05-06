#include <iostream>
using namespace std;

int EOJ_solution_1030(void) {
	//考虑到N<=50，而不知道一共有多少组输入，此处宜用查表法
	int res[51] = { 0 };//50年内牛的数量，res[0]置空
	res[1] = 1;
	int num[4] = { 0 };	//num[i]表示已经生下来i年的牛有几只,3年以上无需继续分类
	num[0] = 1;
	int temp;
	for (int i = 2;i <= 50;i++) {
		temp = num[2];
		num[2] += num[1];
		num[1] = num[0];
		num[0] = temp;
		res[i] = res[i - 1] + num[0];
	}
	while ((cin >> temp) && temp != 0)cout << res[temp] << endl;

	return 0;
}