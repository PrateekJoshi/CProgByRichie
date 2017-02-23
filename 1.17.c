#include<stdio.h>

//Write a program to print all input lines that are longer than 80 characters

#define MIN_LENGTH 10
void display(char *a) {
	for (int i = 0; i < 100; i++)
		printf("%c", *(a + i));
}

int main() {
	int count = 0;
	char buffer[MIN_LENGTH + 1]; //+1 for /0 char
	char ch;
	while ((ch = getchar()) != EOF) {
		if (count < MIN_LENGTH) {
			if (ch == '\n') {
				count = 0;
			} else {
				buffer[count++] = ch;
				if (count == MIN_LENGTH) {
					buffer[count] = '\0';
					printf("%s", buffer);
				}
			}

		} else {
			putchar(ch);
			if (ch == '\n')
				count = 0;
		}
	}
	return 0;
}

