#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a=0,b=0;
    float c,N;
    int *snum;
    int *score;
    char **name;

    printf("학생 수를 입력하세요:");
    scanf("%f",&N);

    name = (char**)malloc(N*sizeof(char*));
    for(int i=0;i<N;i++){
        name[i] = (char*)malloc(100*sizeof(char));
    }
    snum = (int*)malloc(N*sizeof(int));
    score = (int*)malloc(N*sizeof(int));

    for (int j = 0; j < N; j++){
        printf("%d번째 학생 학번",j+1);
        scanf("%d",&snum[j]);
        printf("%d번째 학생 이름",j+1);
        scanf("%s",name[j]/*,100 * sizeof(char)*/);
        printf("%d번째 학생 점수",j+1);
        scanf("%d",&score[j]);
    }
    
    for (int j = 1; j < N; j++){
        if (score[j]>score[j-1])
        {
            a=j;
        }else if (score[j]<score[b])
        {
            b=j;
        }
        c += score[j];
        
    }
    c += score[0];
    c = c / N;
    printf("최고점: %d\n",score[a]);
    printf("최저점: %d\n",score[b]);
    printf("평균: %.2f",c);
    
    
    free(score);
    free(snum);
    for(int i=0;i<N;i++){
        free(name[i]);
    }
    free(name);

    return 0;
}