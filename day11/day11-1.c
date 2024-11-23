#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void Qf1(int a,int b);
void Qf2(int a,int b,int b2);

int main(void){
    int a,b,c,b2;
    printf("(이차항의 계수, 일차항의 계수, 상수항) : ");
    scanf("%d, %d, %d", &a, &b, &c);
    b2 = pow(b,2)- 4*(a*c);
    if (b2==0)
    {
        Qf1(a,b);
    }else if (b2>0)
    {
        Qf2(a,b,b2);
    }
    printf("프로그램 종료");
    return 0;
}
void Qf1(int a,int b){
    a= -b/ (2*a);
    printf("근 : %d",a);
}
void Qf2(int a,int b,int b2){
    int x,y;
    x= (-b -sqrt(b2))/ (2*a);
    y= (-b +sqrt(b2))/ (2*a);
    printf("근 : %d, %d",x,y);
}