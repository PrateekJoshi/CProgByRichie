#include <stdio.h>

/*Write a program to determine the ranges of char, short, int, and long
 variables, both signed and unsigned, by printing appropriate values from standard headers
 and by direct computation. */

int main(int argc, char **argv) {
	printf("Signed Integer:\n");
	printf("minimum signed int: %d\n", -(int) ((unsigned int) ~0 >> 1) - 1);
	printf("maximum signed int: %d\n", (int) ((unsigned int) ~0 >> 1));

	printf("UnSigned Integer:\n");
	printf("minimum unsigned int: %d\n", 0);
	printf("maximum unsigned int: %u\n", (unsigned int) ~0);

	printf("Signed char:\n");
	printf("minimum signed char: %d\n", -(char) ((unsigned char) ~0 >> 1) - 1);
	printf("maximum signed char: %d\n", (char) ((unsigned char) ~0 >> 1));

	printf("UnSigned char:\n");
	printf("minimum unsigned char: %d\n", 0);
	printf("maximum unsigned char: %d\n", (unsigned char) ~0);

	printf("Signed Long:\n");
	printf("minimum signed long: %ld\n", -(long) ((unsigned long) ~0 >> 1) - 1);
	printf("maximum signed long: %ld\n", (long) ((unsigned long) ~0 >> 1));

	printf("UnSigned long:\n");
	printf("minimum unsigned long: %d\n", 0);
	printf("maximum unsigned long: %ld\n", (unsigned long) ~0);
	return 0;
}
