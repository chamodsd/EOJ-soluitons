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

int main() {		//���в����������ֻ���Դӱ�׼�����л�ȡ��ֵ����Ϊ�������fopen�Ⱥ��������޸ĸ���solution��
	int question_num;
	cin >> question_num;
	solution(question_num);
	return 0;
}