#include <stdio.h>
#include <stdlib.h>

typedef int (*fptrOper)(int, int);
int add(int,int);
int sub(int,int);
int doOperation(fptrOper, int, int);

int main(int argc, char **argv) {
	typedef int (*fptrDoOPr)(fptrOper, int, int);
	fptrDoOPr opr = doOperation;

	printf("add: %d\n", opr(add, 4, 4));
	printf("sub: %d\n", opr(sub, 4, 4));
	return 0;
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int doOperation(fptrOper op, int a, int b) {
	return op(a, b);
}
