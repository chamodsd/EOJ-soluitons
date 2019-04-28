#include <iostream>
using namespace std;

int EOJ_solution_2008() {
	//思路：
	//1.分别利用2个数组a[],b[]，二分排序输入与查询值O(mlogm+nlogn)
	//2.设置2个游标i,j，分别指向两个排序后数组的第一个元素。
	//3.a)如果a[i]==b[j]，输出yes\n，j++；
	//	b)如果a[i]<b[j]，i++;
	//	c)如果a[i]>b[j]，输出no\n，j++

	//但是本题数据量n较小，不妨采用最原始的方法，最多也就O(M*N)的时间复杂度
	int num_lib, num_given, temp;
	int a[101];

	cin >> num_lib;
	for (int i = 0;i < num_lib;i++)cin >> a[i];

	cin >> num_given;
	for (int i = 0;i < num_given;i++) {
		cin >> temp;
		for (int j = 0;j < num_lib;j++) {
			if (temp == a[j]) { cout << "yes!" << endl;break; }		//注:不加这个大括号，则无论如何都会直接break。因此错了很多次……
			if (j == num_lib - 1) { cout << "no!" << endl;break; }	//这个地方似乎还可以优化，不必每次都判断？
		}
	}
	return 0;
}