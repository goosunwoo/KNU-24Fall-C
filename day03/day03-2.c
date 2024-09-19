#include<stdio.h>
int fact(int num);

int main(void) {
	int a;
	printf("계산할 팩토리얼 값:");
	scanf_s("%d", &a);
	int b = fact(a);
	printf("%d! = %d",a, b);
	return 0;
}

int fact(int num) {
	if (num == 1 || num ==0) {
		return 1;
	}else return num = num * fact(num - 1);
}