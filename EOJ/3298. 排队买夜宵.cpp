#include <iostream>
using namespace std;
#define MAX 10000
//����ע��45�е�s.top-1��

//��Ȼ���������飬��������ջ���ǳ��򵥣�ֻ����temp��¼cin��ֵ���ȶ�cin��ֵ��temp��ֵ��������num�Ǽ�һ���Ǽ�һ���ɣ�
//Ϊ�˲���ջ���ǹڲ������˴�����ջ��Ϊ���ݽṹ
//�˴�����˳��ջ��Ϊ�洢�ṹ
//��ע������ջ�������������ӻ������⣬�������Ҫ��������ʣ�µ����У���ô��ջ�����Ǻ��ʵġ��˴�����ѵ���뷶���á���

typedef struct {
	char *base;
	char *top;
	int size;	//length����ͨ��ָ��������ɵõ���ע��ָ���������Ԫ�����͵�sizeΪ��λ�ġ�
}stack;

int init_stack(stack &s) {
	s.base = (char *)malloc(MAX * sizeof(char));
	s.top = s.base;
	s.size = MAX;
	return 0;
}

int push(stack &s, char e) {
	//���ﲻ����ջ���������Ԥ�����㹻�Ŀռ�
	*s.top++ = e;
	return 0;
}

int pop(stack &s, char &e) {	//ע���˴�Ҳ����Ҫ��e����ֵ������Ϊ�˺�����һ����Ӳ���e
	//���ﲻ����ջ�յ����������Ϊ��³���Ի������һ���ж�
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
	cin.get(e);	//���N����Ŀո���߻س�

	for (int i = 0;i < n;i++) {
		while (cin.get(e) && (e == '0' || e == '1')) {
			if (s.top != s.base && e != *(s.top - 1))pop(s, e);	//����ע�������s.top-1��ÿ��push�꣬s,topָ���ֵ��������ֵ
			else push(s, e);
		}
		cout << s.top - s.base << endl;
		s.top = s.base;
	}
	return 0;
}