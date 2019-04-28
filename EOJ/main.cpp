#include <iostream>
#include "eoj_solutions.h"
using namespace std;

int EOJ_solution(int index) {
	switch (index)
	{
	case 1002:EOJ_solution_1002();break;
//	case 1026:EOJ_solution_1026();break;
	case 1073:EOJ_solution_1073();break;
	case 1828:EOJ_solution_1828();break;
	case 1841:EOJ_solution_1841();break;
	case 2008:EOJ_solution_2008();break;
	case 2968:EOJ_solution_2968();break;
	case 3686:EOJ_solution_3686();break;

	default:break;
	}
	return 0; 
}

int main(void) {		//美中不足的是现在只可以从标准输入中获取数值，因为如果采用fopen等函数会大幅修改各个EOJ_solution。
	int question_num;
	cin >> question_num;
	EOJ_solution(question_num);
	getchar();
	getchar();
	return 0;
}