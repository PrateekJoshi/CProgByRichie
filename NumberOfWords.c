#include <stdio.h>
//pg-22

#define IN 0
#define OUT 1

int main() {
	char c;
	int line = 0;
	int word = 0;
	int ch = 0;
	int state;  //to keep track of words
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			line++;
		if (c == '\n' || c == '\t' || c == ' ') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			word++;
		}
		ch++;
	}
	printf("line:%d\nword:%d",line,word+1);
	return 0;
}
