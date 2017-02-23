#include <stdio.h>

int main(int argc, char **argv) {
	char code[1000];
	char output[1000];
	char ch;
	int i = 0;
	//store code in array
	while ((ch = getchar()) != EOF) {
		code[i++] = ch;
	}
	code[i] = '\0';
	int index = 0;
	i = 0;
	//store removed comment code in output
	while (code[i] != EOF) {
		if (code[i] == '/' && code[i + 1] == '/') {
			while (code[i] != '\n')
				i++;
		} else if (code[i] == '/' && code[i + 1] == '*') {
			i = i + 2;
			while (code[i] != '*' && code[i + 1] != '/') {
				i++;
			}
			i = i + 3;
		} else {
			output[index++] = code[i++];
		}

	}
	output[index] = '\0';
	printf("%s", output);
}
