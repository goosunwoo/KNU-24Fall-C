#include<stdio.h>

int main(void){
    int n,c;
    scanf("%d",&n);
    c = n;
    for(int i=1; i<=n;i++){

        for (int j = 1; j < c; j++)
        {
            printf(" ");
        }
        c -= 1;
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}