#include <iostream>
using namespace std;

int EOJ_solution_1841(void) {
	//���ִ�ѡ�Ĳ��ԣ�
	//ð������				
	//��������ϣ������	P265
	//��������				P272
	//ѡ������				P277
	//���ֹ鲢����			P283
	//��������				P284
	int n;
	int a[30];
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n - i - 1; j++) {
			if (a[j] > a[j+1])swap(a[j], a[j+1]);
		}
	}
	for (int i = 0;i < n;i++) {
		cout << a[i] << endl;
	}
	return 0;
}