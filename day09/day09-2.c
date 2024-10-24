#include<stdio.h>
#define Pcnt 5

struct Product{
    int PID[Pcnt];
    char PNM[Pcnt][100];
    int PPR[Pcnt];
}p;

int rdpc(int a);

int main(void){
    int a=0;
    while(a<=4){
        printf("\n상품 정보를 입력하세요(입력 중단은 ID에 0 입력)\n상품 ID : ");
        scanf("%d",&p.PID[a]);
        if(p.PID[a]==0) break;
        else if (rdpc(a)==1)continue;
        printf("상품명 : ");
        scanf("%s",p.PNM[a]);
        printf("가격 : ");
        scanf("%d",&p.PPR[a]);
        a++;
    }
    printf("\n <<입력된 상품 목록>>\n");
    for (int i = 0; i < a; i++){
        printf("상품 ID : %d\n",p.PID[i]);
        printf("상품명 : %s\n",p.PNM[i]);
        printf("가격 : %d\n\n",p.PPR[i]);
    }
    
    
    return 0;
}
int rdpc(int a){
    for (int j = 0; j < a; j++){
        if (p.PID[a]==p.PID[j]){
            printf("중복되는 상품 코드입니다.\n");
            return 1;
        }
    }
    return 0;
}