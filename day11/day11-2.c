#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double F1(double x);
double F2(double x, double y, double i);

int main(void){
    double x, y, z;
    double a=0, b, c;
    printf("적분할 시작값, 끝값, 최대 구간:");
    scanf("%lf %lf %lf",&x, &y, &z);
    for (int i = 2; i < pow(2,z); i*=2){
        for (int j =1;j<=i;j++){
            a += F2(x,y,i) * F1(j*F2(x,y,i)+x);

        }
        printf("구간 %d 적분 결과 : %lf\n", i, a);
        a=0;
    }
    
    return 0;
}

double F1(double x){
    double X = -log10(1/x)+sin(x);
    return X;
}
double F2(double x, double y, double i){
    double X = (y-x)/i;
    return X;
}
//(n F2)+x 좌표
