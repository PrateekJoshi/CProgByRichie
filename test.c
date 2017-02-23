#include <stdio.h>
#include <stdint.h>
#include <wchar.h>
#include <limits.h>

int main(int argc, char **argv) {
	const int constInt = 14;
	int normalInt = 10;
	const int *ptr;
	ptr = &normalInt;
	ptr=&constInt;
	printf("Normal int value: %d", *ptr);

	return 0;
}
