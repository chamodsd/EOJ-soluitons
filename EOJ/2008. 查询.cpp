#include <iostream>
using namespace std;

int EOJ_solution_2008() {
	//˼·��
	//1.�ֱ�����2������a[],b[]�����������������ѯֵO(mlogm+nlogn)
	//2.����2���α�i,j���ֱ�ָ���������������ĵ�һ��Ԫ�ء�
	//3.a)���a[i]==b[j]�����yes\n��j++��
	//	b)���a[i]<b[j]��i++;
	//	c)���a[i]>b[j]�����no\n��j++

	//���Ǳ���������n��С������������ԭʼ�ķ��������Ҳ��O(M*N)��ʱ�临�Ӷ�
	int num_lib, num_given, temp;
	int a[101];

	cin >> num_lib;
	for (int i = 0;i < num_lib;i++)cin >> a[i];

	cin >> num_given;
	for (int i = 0;i < num_given;i++) {
		cin >> temp;
		for (int j = 0;j < num_lib;j++) {
			if (temp == a[j]) { cout << "yes!" << endl;break; }		//ע:������������ţ���������ζ���ֱ��break����˴��˺ܶ�Ρ���
			if (j == num_lib - 1) { cout << "no!" << endl;break; }	//����ط��ƺ��������Ż�������ÿ�ζ��жϣ�
		}
	}
	return 0;
}