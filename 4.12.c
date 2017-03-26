#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void itoaRecursive(int n,char arr[]) ;

/*Adapt the ideas of printd to write a recursive version of itoa; that is, convert
 an integer into a string by calling a recursive routine. */
#define LEN 100

int main() {
	char arr[LEN];
	int number=-123045;
	itoaRecursive(number,arr);
	printf("Integer number: %d \n",number);
	printf("Number after converting to char: \n");
	for(int i=0;i<strlen(arr);i++){
		printf("%c",arr[i]);
	}
	return 0;
}

void itoaRecursive(int n,char arr[]) {
	static int index=0;
	if(n/10>0){
		itoaRecursive(n/10,arr);
	}else{
		if(n<0){
			arr[index++]='-';
			itoaRecursive(-n,arr);
			return;
		}
	}
	arr[index++]='0'+abs(n)%10;
}
