#include <stdio.h>

int main(int argc, char **argv) {
	char ch;
	while((ch=getchar())!=EOF){
       if(ch!=' ' && ch!='	'){
    	   putchar(ch);
       }
	}
	return 0;
}
