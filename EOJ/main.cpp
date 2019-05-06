#include <iostream>
#include "eoj_solutions.h"
using namespace std;

int EOJ_solution(int index) {
	switch (index)
	{
	case 1002:EOJ_solution_1002();break;
//	case 1026:EOJ_solution_1026();break;
	case 1073:EOJ_solution_1073();break;
	case 1221:EOJ_solution_1221();break;
	case 1828:EOJ_solution_1828();break;
	case 1841:EOJ_solution_1841();break;
	case 2004:EOJ_solution_2004();break;
	case 2008:EOJ_solution_2008();break;
	case 2031:EOJ_solution_2031();break;
	case 2140:EOJ_solution_2140();break;
	case 2143:EOJ_solution_2143();break;
	case 2145:EOJ_solution_2145();break;
	case 2581:EOJ_solution_2581();break;
	case 2568:EOJ_solution_2568();break;
	case 2610:EOJ_solution_2610();break;
	case 2690:EOJ_solution_2690();break;
	case 2968:EOJ_solution_2968();break;
	case 3682:EOJ_solution_3682();break;
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