#include<stdio.h>

int main(void) {
	int AC, count=0;
	for (AC = 0; AC <= 99; AC++) {
		if (((AC % 4 == 0)&&(AC%3==0))||AC%7==0) {
			printf("%d ", AC);
			count++;
			if (count % 6 == 0)printf("\n");
		}
	}
	return 0;
}
