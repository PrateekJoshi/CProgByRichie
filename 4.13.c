#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char*,int,int);
void swap(int,int,char *);

int main(int argc, char **argv) {
	char str[]="prateek";
	printf("Original string : %s \n",str);
	reverse(str,0,strlen(str)-1);
	printf("Reverse string : %s",str);
	return 0;
}

void reverse(char *arr,int start,int end){
	if(start>=end){
		return;
	}
	swap(start,end,arr);
	reverse(arr,++start,--end);
}

void swap(int a,int b,char *arr){
	char temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}
