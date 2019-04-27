#include <iostream>
using namespace std;

int EOJ_solution_1073(void) {
	int i = 0;
	char temp;
	while (getchar() != EOF) {
		i = 1;
		while ((temp = getchar()) != '\n') i++;
		cout << i << endl;
	}
	return 0;
}