#include <iostream>
using namespace std;

int EOJ_solution_2143(void) {
	int n;
	int asset;
	int price;
	int temp;
	int num;
	int num_free;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> asset >> price;
		num = asset / price;//能够用钱买到的最多粽子数，问题简化为num的单值函数
		temp = num;
		while (num >= 5) {
			num_free = num / 5 * 2;
			temp += num_free;
			num %= 5;
			//num += num_free;
			//加上上述语句就变成了交换空瓶子问题
		}
		while (num >= 3) {
			num_free = num / 3;
			temp += num_free;
			num %= 3;
			//num += num_free;
		}
		cout << temp << endl;
	}
	return 0;
}