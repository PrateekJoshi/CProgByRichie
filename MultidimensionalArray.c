#include <stdio.h>
#include <stdlib.h>
void display(int(*)[5],int);
int main(int argc, char **argv) {
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for(int j=0;j<5;j++){
			arr[i][j]=5;
		}
	}
	display(arr,5);
	return 0;
}

void display(int (*arr)[5],int size){
	for (int i = 0; i < 5; i++) {
			for(int j=0;j<5;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
}


