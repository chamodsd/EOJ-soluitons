#include <iostream>
using namespace std;

int EOJ_solution_2610(void) {
	int n;
	int res;
	int temp;
	int all, task;	//总零件数与需要完成的零件数
	cin >> n;
	for (int i = 0;i < n;i++) {
		res = 0;
		cin >> all >> task;
		for (int j = 0;j < all;j++) {
			cin >> temp;
			if (j < task)res += temp;
		}
		cout << res << endl;
	}
	return 0;
}