#include <stdio.h>
/* Write a Program to copy its input to its output, replacing each tab by \t,each backspace by \b, and each backslash by \\.
 This makes tabs and backspaces visible in an unambiguous way. */

int main() {
	char ch;
	while ((ch = getchar()) != EOF) {
		if (ch == '\t') {
			putchar('\\');
			putchar('t');
		}
		if (ch == '\b') {
			putchar('\\');
			putchar('b');
		}
		if (ch == '\\') {
			putchar('\\');
			putchar('\\');
		}

		if (ch != '\t' && ch != '\b' && ch != '\\')
			putchar(ch);
	}
	return 0;
}
