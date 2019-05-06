#include <iostream>
using namespace std;

int EOJ_solution_2690(void) {
	int temp, c_num, bot, f;	//最后得到的饮料数量，一次交换中交换的空瓶子数量，剩余的瓶子总数，一次交换需要的最少瓶子
	while (cin >> bot) {
		cin >> temp;
		bot += temp;
		cin >> f;
		temp = 0;
		while (bot >= f) {
			c_num = bot - bot % f;
			bot -= c_num;
			bot += c_num / f;
			temp += c_num / f;
		}
		cout << temp << endl;
	}
	return 0;
}