#include <stdio.h>

int toLower(int);

int main(int argc, char **argv) {
	int ch;
	printf("Enter upper case char: ");
	ch=getchar();
	int ans=toLower(ch);
	printf("\nLower case char: %c", ans);
	return 0;
}

int toLower(int ch){
	if(ch>='A' && ch<='Z'){
		return ch+('a'-'A');
	}else{
		return -1;
	}
}
