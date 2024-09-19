#include<stdio.h>
int prime(int num);

int main(void) {
	int a;
	scanf_s("%d", &a);
	int b = prime(a);
	printf("%d", b);
	return 0;
}

int prime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}