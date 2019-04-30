#include <iostream>
using namespace std;

int EOJ_solution_3682(void) {
	int x1, y1, x2, y2;
	cin >> x1 >> x1 >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	if ((x2 - x1 + y2 - y1) % 2 == 0)cout << "Win";
	else cout << "Lose";
	return 0;
}