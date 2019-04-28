#include <iostream>
using namespace std;

int EOJ_solution_1002(void) {
	//这里用getchar/cin.get处理可能会好很多
	int n;
	int temp;
	int num;
	cin >> n;
	int a[] = { 128,64,32,16,8,4,2,1 };			//进制转换系数
	for (int i = 0;i < n;i++) {
		cin.get();								//输入\n
		for (int j = 0;j < 4;j++) {
			temp = 0;
			for (int k = 0;k < 8;k++) {
				num = int(cin.get()) - 48;
				temp += num * a[k];
			}
			cout << temp;
			if (j != 3)cout << ".";
			else cout << endl;
		}
	}
	return 0;
}