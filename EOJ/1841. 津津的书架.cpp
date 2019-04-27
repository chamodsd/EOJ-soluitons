#include <iostream>
using namespace std;

int EOJ_solution_1841(void) {
	//¼¸ÖÖ´ýÑ¡µÄ²ßÂÔ£º
	//Ã°ÅÝÅÅÐò				
	//²åÈëÅÅÐò¡¤Ï£¶ûÅÅÐò	P265
	//¿ìËÙÅÅÐò				P272
	//Ñ¡ÔñÅÅÐò				P277
	//¶þ·Ö¹é²¢ÅÅÐò			P283
	//»ùÊýÅÅÐò				P284
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