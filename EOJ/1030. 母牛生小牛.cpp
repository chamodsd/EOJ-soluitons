#include <iostream>
using namespace std;

int EOJ_solution_1030(void) {
	//���ǵ�N<=50������֪��һ���ж��������룬�˴����ò��
	int res[51] = { 0 };//50����ţ��������res[0]�ÿ�
	res[1] = 1;
	int num[4] = { 0 };	//num[i]��ʾ�Ѿ�������i���ţ�м�ֻ,3�����������������
	num[0] = 1;
	int temp;
	for (int i = 2;i <= 50;i++) {
		temp = num[2];
		num[2] += num[1];
		num[1] = num[0];
		num[0] = temp;
		res[i] = res[i - 1] + num[0];
	}
	while ((cin >> temp) && temp != 0)cout << res[temp] << endl;

	return 0;
}