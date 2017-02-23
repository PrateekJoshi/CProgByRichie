#include <stdio.h>

int strToNum(char str[]);

int main(int argc, char **argv) {
	char str[100];
	int i = 0;
	printf("Enter the string: ");
	char ch;
	while ((ch = getchar()) != '\n') {
		str[i++] = ch;
	}
	str[i] = '\0';
	int num = strToNum(str);
	printf("\n Number is: %d", num);
	return 0;
}

int strToNum(char str[]) {
	int i = 0;
	int num = 0;
	while (str[i] != '\0') {
		num = 10 *num+ (str[i++] - '0');
	}
	return num;
}
