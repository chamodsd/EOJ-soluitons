#include <iostream>
#include "eoj_solutions.h"
using namespace std;

int EOJ_solution(int index) {
	switch (index)
	{
	case 1026:EOJ_solution_1026();break;	//�в���BUG�������ɵ���
	case 1073:EOJ_solution_1073();break;
	case 1828:EOJ_solution_1828();break;
	case 2968:EOJ_solution_2968();break;
	case 3686:EOJ_solution_3686();break;

	default:break;
	}
	return 0; 
}

int main() {		//���в����������ֻ���Դӱ�׼�����л�ȡ��ֵ����Ϊ�������fopen�Ⱥ��������޸ĸ���EOJ_solution��
	int question_num;
	cin >> question_num;
	EOJ_solution(question_num);
	getchar();
	getchar();
	return 0;
}