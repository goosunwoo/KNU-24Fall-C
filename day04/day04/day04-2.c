#include<stdio.h>
void swap(int* pnum1, int* pnum2);

int main(void) {
	int a = 10, b = 20;
	swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
		return 0;
}
void swap(int* pnum1, int* pnum2) {
	int a = * pnum1;
	*pnum1 = *pnum2;
	* pnum2 = a;
}