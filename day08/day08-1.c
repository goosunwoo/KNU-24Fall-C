#include <stdio.h>
void tb(char *a,char *b);
int main(void){
    char st[100];
    int count=0,a;
    printf("문자열 입력:");
    scanf("%s",st);
    while(st[count]!= 0){
        count++;
    }
    a = count;
    for (int i = 0; i < count/2; i++)
    {
        a--;
        tb(&st[i],&st[a]);
    }
    printf("%s",st);
    return 0;
}
void tb(char *a,char *b){
    char c=*a;
    *a=*b;
    *b =c;
}
