#include<stdio.h>

int main(void) {
	int num1 = 100, num2 = 100;

	int* pit1;

	pit1 = &num1;
	(*pit1) += 30;
	pit1 = &num2;
	(*pit1) -= 30;

	printf("%d, %d", num1, num1);

	return 0;
}