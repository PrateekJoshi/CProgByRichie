#include <stdio.h>
#include <math.h>

int getDecimal();
char hexNum[100];

int main(int argc, char **argv) {
	printf("Enter the hex number: ");
	int i = 0;
	char ch;
	while ((ch = getchar()) != '\n') {
		hexNum[i++] = ch;
	}
	hexNum[i] = '\0';
	printf("\nHexadecimal Number is: %s", hexNum);
	int n = getDecimal();
	printf("\nDecimal Number is: %d" + n);
	return 0;
}

int getDecimal() {
	int var = 0;
	int index = 0;
	while (hexNum[index] != '\0') {
		var = 16 * var;

		switch (hexNum[index]) {
		case 'a':
			var = var + 10;
			break;
		case 'b':
			var = var + 11;
			break;
		case 'c':
			var = var + 12;
			break;
		case 'd':
			var = var + 13;
			break;
		case 'e':
			var = var + 14;
			break;
		case 'f':
			var = var + 15;
			break;
		default:
			var=var+('0'-hexNum[index]);
			break;
		}
		++index;
	}
	return var;
}
