#include <iostream>
using namespace std;
#define MAX 10000
//尤其注意45行的s.top-1！

//显然此题用数组，甚至不用栈都非常简单（只需用temp记录cin的值，比对cin的值与temp的值决定数量num是加一还是减一即可）
//为了操练栈的星冠操作，此处采用栈作为数据结构
//此处采用顺序栈作为存储结构
//【注：采用栈在这里甚至复杂化了问题，但是如果要求输出最后剩下的序列，那么用栈无疑是合适的。此处仅做训练与范例用。】

typedef struct {
	char *base;
	char *top;
	int size;	//length可以通过指针相减轻松得到，注意指针相减是以元素类型的size为单位的。
}stack;

int init_stack(stack &s) {
	s.base = (char *)malloc(MAX * sizeof(char));
	s.top = s.base;
	s.size = MAX;
	return 0;
}

int push(stack &s, char e) {
	//这里不存在栈满的情况，预留了足够的空间
	*s.top++ = e;
	return 0;
}

int pop(stack &s, char &e) {	//注：此处也不需要用e返回值，但是为了和书上一致添加参数e
	//这里不存在栈空的情况，但是为了鲁棒性还是添加一下判断
	if (s.top == s.base)return -1;
	e = *--s.top;
	return 0;
}

int EOJ_solution_3298(void) {
	int n;
	cin >> n;
	stack s;
	init_stack(s);
	char e;
	cin.get(e);	//清除N后面的空格或者回车

	for (int i = 0;i < n;i++) {
		while (cin.get(e) && (e == '0' || e == '1')) {
			if (s.top != s.base && e != *(s.top - 1))pop(s, e);	//尤其注意这里的s.top-1，每次push完，s,top指向的值都是垃圾值
			else push(s, e);
		}
		cout << s.top - s.base << endl;
		s.top = s.base;
	}
	return 0;
}