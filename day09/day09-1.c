#include <stdio.h>

struct vec1{
    int x,y,z;
}vec1;
struct vec2{
    int x,y,z;
}vec2;

int main(void)
{
    int a=0;
    printf("첫번째 벡터(x, y, z) : ");
    scanf("%d, %d, %d",&vec1.x,&vec1.y,&vec1.z);
    printf("두번째 벡터(x, y, z) : ");
    scanf("%d, %d, %d",&vec2.x,&vec2.y,&vec2.z);
    printf("입력된 첫번째 벡터\t%d\t%d\t%d\n",vec1.x,vec1.y,vec1.z);
    printf("입력된 두번째 벡터\t%d\t%d\t%d",vec2.x,vec2.y,vec2.z);
    printf("--------------------\n1. 벡터의 합\n2. 벡터의 차\n3. 벡터의 외적\n4. 벡터의 내적\n5. 종료");
    while (a!=5)
    {
        printf("\n--------------------\n명령 입력 : ");
        scanf("%d",&a);
        switch (a){
        case 1:
            printf("벡터의 합은\tx:%d\ty:%d\tz:%d",vec1.x+vec2.x,vec1.y+vec2.y,vec1.z+vec2.z);
            break;
        case 2:
            printf("벡터의 차는\tx:%d\ty:%d\tz:%d",vec1.x-vec2.x,vec1.y-vec2.y,vec1.z-vec2.z);
            break;
        case 3:
            printf("벡터의 외적은\tx:%d\ty:%d\tz:%d",(vec1.y*vec2.z)-(vec1.z*vec2.y),(vec1.z*vec2.x)-(vec1.x*vec2.z),(vec1.x*vec2.y)-(vec1.y*vec2.x));
            break;
        case 4:
            printf("벡터의 내적은\tvec1 ・ vec2=%d",(vec1.x*vec2.x)+(vec1.y*vec2.y)+(vec1.z*vec2.z));
            break;
        case 5:
            printf("종료합니다.");
            break;
        default:
            printf("입력 오류.");
            break;
        }
    }
    
    return 0;
}
