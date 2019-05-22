#include <iostream>
using namespace std;
#define size 101

int EOJ_solution_3001(void) {
	int n, a, b;
	int res[size];	//实际上最多100位，比10^100小，此处方便起见设置102个空闲位置
	int temp;
	cin >> n;

	for (int i = 0;i < n;i++) {

		//输入a,b，初始化res[0..size],temp
		cout << "case #" << i << ":" << endl;
		cin >> a >> b;
		if (b == 0) {						//特判0次幂
			cout << 1 << endl;
			continue;
		}

		res[0] = a;
		for (int j = 1;j <= size;j++) {
			res[j] = 0;
		}
		temp = 0;
		
		//计算值
		for (int k = 0;k < b - 1;k++) {			//共乘积b-1次
			for (int j = 0;j < k + 2 && k < size;j++) {
				res[j] = res[j] * a + temp;
				if (res[j] >= 10) {
					temp = res[j] / 10;
					res[j] %= 10;
				}
				else temp = 0;
			}
		}

		//逆序输出，注意因为a!=0所以无需特判0
		for (int j = size - 1;j >= 0;j--) {
			if (res[j] == 0) {
				//j--;注：原本在这里添加了此语句，造成了非常隐蔽的BUG，即如果是偶数位数的结果，第一位会消失
				temp = j;
			}
			else break;
		}
		for (int j = temp - 1;j >= 0;j--) {
			cout << res[j];
		}
		cout << endl;
	}

	return 0;
}
