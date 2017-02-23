#include <stdio.h>
void escape(char[],char[]);

int main(int argc, char **argv) {
	char sentence[100];
	char op[100];
	int ch;
	int i = 0;
	while ((ch = getchar()) != EOF) {
		sentence[i++] = ch;
	}
	sentence[i] = '\0';
	escape(sentence, op);
	printf("%s", op);
	return 0;
}

void escape(char sen[], char op[]) {
	char *ch = sen;
	int i = 0;
	int j=0;
	while (sen[j] != '\0') {
		switch (sen[j]) {
		case '\n':
			j++;
			break;
		case '\t':
			j++;
			break;
		default:
			op[i++]=sen[j++];
			break;
		}
	}
    op[i]='\0';
}
