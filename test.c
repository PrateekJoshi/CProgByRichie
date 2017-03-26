#include <stdio.h>
#include <stdlib.h>

void func();

int main(int argc, char **argv) {
	func();
	func();
	return 0;
}

void func(){
	static int a;
	printf("In func: %d",a++);
}
