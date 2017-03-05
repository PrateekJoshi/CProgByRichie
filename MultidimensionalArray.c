#include <stdio.h>
#include <stdlib.h>
void display(int (*)[5], int);
void display2(int[][5], int);
void display3(int *, int, int);

int main(int argc, char **argv) {
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = 5;
		}
	}
	printf("Method 1:\n");
	display(arr, 5);
	printf("Method 2:\n");
	display2(arr, 5);
	printf("Method 3:\n");
	display3(&arr[0][0], 5, 5);
	return 0;
}

void display(int (*arr)[5], int size) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void display2(int arr[][5], int size) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void display3(int *arr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", *(arr + (col * i) + j));
		}
		printf("\n");
	}
}
