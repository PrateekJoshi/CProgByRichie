#include <stdio.h>

double calculate(char op, double a, double b);

int main(int argc, char **argv) {
	double a, b;
	char op;
	double ans;
	printf("Enter first num: \n");
	scanf("%lf", &a);
	printf("Enter second num: \n");
	scanf("%lf", &b);
	printf("Enter operation: \n");
	scanf(" %c",&op);
	ans = calculate(op, a, b);
	printf("Result: %lf", ans);
	return 0;
}

double calculate(char op, double a, double b) {
	printf("Inside calculate");
	switch (op) {
	case '+':
		printf("Inside calculate +");
		return (a + b);
		break;
	case '-':
		return (a - b);
		break;
	case '*':
		return a*b;
		break;
	case '/':
		return a / b;
		break;
	default:
		return -1;
		break;
	}

}
