#include <iostream>
using namespace std;

int EOJ_solution_2145(void) {
	int n;
	int input;
	int res;
	int temp;
	cin >> n;
	while (cin >> input) {
		res = 0;
		temp = 0;
		while (input!=0) {
			res += input * (4 + (8 * temp));
			input--;
			temp++;
		}
		cout << res << endl;
	}
	
	return 0;
}