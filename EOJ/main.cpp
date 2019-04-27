#include <iostream>
#include "solutions.h"
using namespace std;

int solution(int index) {
	switch (index)
	{
	case 1026:solution_1026;break;
	case 1073:solution_1073;break;
	case 2968:solution_2968;break;
	case 3686:solution_3686;break;

	default:break;
	}
}

int main() {		//美中不足的是现在只可以从标准输入中获取数值，因为如果采用fopen等函数会大幅修改各个solution。
	int question_num;
	cin >> question_num;
	solution(question_num);
	return 0;
}