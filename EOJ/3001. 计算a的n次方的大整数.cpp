#include <iostream>
using namespace std;
#define size 101

int EOJ_solution_3001(void) {
	int n, a, b;
	int res[size];	//ʵ�������100λ����10^100С���˴������������102������λ��
	int temp;
	cin >> n;

	for (int i = 0;i < n;i++) {

		//����a,b����ʼ��res[0..size],temp
		cout << "case #" << i << ":" << endl;
		cin >> a >> b;
		if (b == 0) {						//����0����
			cout << 1 << endl;
			continue;
		}

		res[0] = a;
		for (int j = 1;j <= size;j++) {
			res[j] = 0;
		}
		temp = 0;
		
		//����ֵ
		for (int k = 0;k < b - 1;k++) {			//���˻�b-1��
			for (int j = 0;j < k + 2 && k < size;j++) {
				res[j] = res[j] * a + temp;
				if (res[j] >= 10) {
					temp = res[j] / 10;
					res[j] %= 10;
				}
				else temp = 0;
			}
		}

		//���������ע����Ϊa!=0������������0
		for (int j = size - 1;j >= 0;j--) {
			if (res[j] == 0) {
				//j--;ע��ԭ������������˴���䣬����˷ǳ����ε�BUG���������ż��λ���Ľ������һλ����ʧ
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
