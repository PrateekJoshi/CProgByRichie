#include <stdio.h>
//Write a program to count blanks, tabs, and newlines.
int main(){
	printf("Enter the text");
	int space=0;
	int tabs=0;
	int newLine=0;
	int i=0;
	char ch;
	while((ch=getchar())!=EOF){
		if (ch== ' ')
			space++;
		if (ch == '\t')
			tabs++;
		if (ch == '\n')
			newLine++;
		i++;

	}

	printf("space:%d\ntabs:%d\nnew line:%d",space,tabs,newLine);
	return 0;
}
