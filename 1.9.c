#include <stdio.h>
#include<time.h>

int main(int argc, char **argv) {
	char str[]="test     test test   test";
	char *c=str;
	int i=0;
	int n=0;
	while(i<strlen(str)){
         c[n]=str[i];
         if(str[i]==' '){
                 while(str[i+1]==' ')
                	 i++;
         }
         n++;
         i++;
	}
	c[n]='\0';

	printf("%s",c);

}

