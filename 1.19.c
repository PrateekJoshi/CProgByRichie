#include <stdio.h>

/*Write a function reverse(s) that reverses the character string s. Use it to
 write a program that reverses its input a line at a time. */
void copy(char*, char*, int);

int main(int argc, char **argv) {
	char arr[100];
	char rev[100];
	char ch;
	int count = 0;
	while ((ch = getchar()) != EOF) {
		if (ch != '\n') {
			arr[count++] = ch;
		} else {
			copy(arr, rev, count - 1);
			printf("%s", rev);
			count = 0;
		}
	}
	return 0;
}

void copy(char *arr, char *rev, int index) {
	int i = 0;
	while (index >= 0) {
		*(rev + i) = *(arr + index);
		index--;
		i++;
	}
	*(rev + i) = '\0';
}

