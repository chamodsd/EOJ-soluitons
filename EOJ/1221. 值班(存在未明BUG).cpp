#include <iostream>
using namespace std;

int EOJ_solution_1221(void) {
	int a[30] = { 0 };
	int temp;
	int i;
	int num;
	cin >> num;							//��������ʵ��������벻�Ƿ���������ȫʡȥ��һ����
	while (num > 0 && cin >> temp) {
		if (temp == -1) num--;
		else if (temp < 0 || temp>30);
		else a[temp - 1] = 1;
	}
	//for (i = 0;a[i] == 1;i++);		//�ƺ���������������ѭ��
	for (i = 0;i < 30;i++) {
		if (a[i] == 0)break;
	}
	if (i == 30)cout << "yes";
	else cout << "no";
	return 0;
}