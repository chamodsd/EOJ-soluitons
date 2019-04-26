#include <iostream>
using namespace std;

void cal(int temp) {
	int i = 0;
	int a[] = { 100,50,20,10,5,1 };
	while (i <= 4) {
		cout << temp / a[i] << " ";
		temp %= a[i];
		i++;
	}
	cout << temp << endl;
}

int solution_2968() {
	int question_num;
	int temp;
	cin >> question_num;
	for (int i = 0;i < question_num;i++) {
		cout << "case #" << i << ":" << endl;
		cin >> temp;
		cal(temp);
	}
	return 0;
}