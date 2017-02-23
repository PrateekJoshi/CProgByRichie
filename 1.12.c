#include <stdio.h>

int main() {
	char ch;
	while((ch=getchar())!=EOF){
		if(ch!='\n' && ch!=' ' && ch!='\t'){
			putchar(ch);
		}
		else{
			putchar('\n');
		}
	}
	return 0;
}
