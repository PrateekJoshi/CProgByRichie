#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int intCompare(const void* a,const void *b){
	return (*((int*)a)-(*(int*)b));
}

void printIntArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
}

int stringCompare(const void* a,const void* b){
	return strcmp(*(char**)a,*(char**)b);
}

void printStringArray(char* arr[],int size){
	for(int i=0;i<size;i++){
		printf("%s, ",arr[i]);
	}
}

int main(int argc, char **argv) {
	int intArray[]={2,67,1,6,12,31,4};
	char* charArray[]={"banana","guava","apple","pineapple","grapes"};

	qsort(intArray,(sizeof(intArray)/sizeof(int)),sizeof(int),intCompare);
	qsort(charArray,5,sizeof(char*),stringCompare);

	printf("--Sorted Int Array-- \n");
	printIntArray(intArray,(sizeof(intArray)/sizeof(int)));
	printf("\n");
	printf("--Sorted String Array-- \n");
	printStringArray(charArray,5);
	printf("\n");
	return 0;
}
