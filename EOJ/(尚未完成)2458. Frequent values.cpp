#include <iostream>
using namespace std;
#define MAX 1000001

//������ʵҲ����ʹ�����ݽṹ���У�����Ϊ��ѵ����Ŀ�����������һ��˫�����
typedef struct {
	int *tail;
	int *head;
	//ʵ�������Ϊ�˽����֪���޵����⣬��������Ҫsize
}queue;

int init_queue(queue &q) {
	q.tail = (int *)malloc(MAX * sizeof(int));
	q.head = q.tail;
	return 0;
}

int EOJ_solution_2458(void) {

	return 0;
}