#include<stdio.h>

int main(void) {
	int AC;
	printf("���ϴ� ����� �Է��Ͻÿ�.\n1.���ϱ� 2.���� 3.���ϱ� 4.������\n���: ");
	scanf_s("%d", &AC);
	double num1, num2;
	printf("ù��° ����:");
	scanf_s("%lf", &num1);
	printf("�ι�° ����:");
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
		printf("�߸��� ����");
	}
	return 0;
}
