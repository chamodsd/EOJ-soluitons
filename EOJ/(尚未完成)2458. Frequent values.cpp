#include <iostream>
using namespace std;
#define MAX 1000001

//本题其实也不必使用数据结构队列，但是为了训练的目的起见，构建一个双向队列
typedef struct {
	int *tail;
	int *head;
	//实际上如果为了解决已知上限的问题，甚至不需要size
}queue;

int init_queue(queue &q) {
	q.tail = (int *)malloc(MAX * sizeof(int));
	q.head = q.tail;
	return 0;
}

int EOJ_solution_2458(void) {

	return 0;
}