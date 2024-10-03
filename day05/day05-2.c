#include<stdio.h>
#include<stdlib.h>
struct student{
    int *snum;
    int *score;
    char **name;
} s1;

int main(void){
    int a=0,b=0;
    float c,N;

    printf("학생 수를 입력하세요:");
    scanf("%f",&N);

    s1.name = (char**)malloc(N*sizeof(char*));
    for(int i=0;i<N;i++){
        s1.name[i] = (char*)malloc(100*sizeof(char));
    }
    s1.snum = (int*)malloc(N*sizeof(int));
    s1.score = (int*)malloc(N*sizeof(int));

    for (int j = 0; j < N; j++){
        printf("%d번째 학생 학번",j+1);
        scanf("%d",&s1.snum[j]);
        printf("%d번째 학생 이름",j+1);
        scanf("%s",s1.name[j]/*,100 * sizeof(char)*/);
        printf("%d번째 학생 점수",j+1);
        scanf("%d",&s1.score[j]);
    }
    
    for (int j = 1; j < N; j++){
        if (s1.score[j]>s1.score[j-1])
        {
            a=j;
        }else if (s1.score[j]<s1.score[b])
        {
            b=j;
        }
        c += s1.score[j];
        
    }
    c += s1.score[0];
    c = c / N;
    printf("최고점: %d\n",s1.score[a]);
    printf("최저점: %d\n",s1.score[b]);
    printf("평균: %.2f",c);
    
    
    free(s1.score);
    free(s1.snum);
    for(int i=0;i<N;i++){
        free(s1.name[i]);
    }
    free(s1.name);

    return 0;
}