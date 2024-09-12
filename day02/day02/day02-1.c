#include<stdio.h>

int main(void) {
	int AC;
	printf("원하는 기능을 입력하시오.\n1.더하기 2.빼기 3.곱하기 4.나누기\n기능: ");
	scanf_s("%d", &AC);
	double num1, num2;
	printf("첫번째 숫자:");
	scanf_s("%lf", &num1);
	printf("두번째 숫자:");
	scanf_s("%lf", &num2);
	if (AC == 1) {
		printf("%lf + %lf = %lf", num1, num2, num1 + num2);
	}
	else if (AC == 2) {
		printf("%lf - %lf = %lf", num1, num2, num1 - num2);
	}
	else if (AC == 3) {
		printf("%lf * %lf = %lf", num1, num2, num1 * num2);
	}
	else if (AC == 4) {
		printf("%lf / %lf = %lf", num1, num2, num1 / num2);
	}
	else{
		printf("잘못된 값임");
	}
	return 0;
}
