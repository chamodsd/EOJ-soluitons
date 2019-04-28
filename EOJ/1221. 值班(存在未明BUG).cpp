#include <iostream>
using namespace std;

int EOJ_solution_1221(void) {
	int a[30] = { 0 };
	int temp;
	int i;
	int num;
	cin >> num;							//行数，事实上如果输入不非法，可以完全省去这一部分
	while (num > 0 && cin >> temp) {
		if (temp == -1) num--;
		else if (temp < 0 || temp>30);
		else a[temp - 1] = 1;
	}
	//for (i = 0;a[i] == 1;i++);		//似乎不允许这样设置循环
	for (i = 0;i < 30;i++) {
		if (a[i] == 0)break;
	}
	if (i == 30)cout << "yes";
	else cout << "no";
	return 0;
}