#include <iostream>
using namespace std;

int EOJ_solution_2690(void) {
	int temp, c_num, bot, f;	//���õ�������������һ�ν����н����Ŀ�ƿ��������ʣ���ƿ��������һ�ν�����Ҫ������ƿ��
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