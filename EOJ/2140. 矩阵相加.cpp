#include <iostream>
using namespace std;

int EOJ_solution_2140(void) {
	//����û�б䳤���飬����ʹ��һά��������ʾ����
	//����a��b�еľ��󣬼�0~b-1��ŵ�Ԫ��Ϊ��һ�е�Ԫ�أ�b~2b-1Ϊ�ڶ���Ԫ�ء���
	int n;
	int a, b;
	int temp1[1000000];//����1
	int temp2[1000000];//����2
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >> b;//a��b��
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
