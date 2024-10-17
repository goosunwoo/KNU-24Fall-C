#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 10

void fillRandom(int array[SIZE][SIZE]);
void printArray(int array[SIZE][SIZE]);
void movePointer(void*array);

int main(void){
    int array[SIZE][SIZE];

    fillRandom(array);
    printArray(array);
    movePointer(array);
    return 0;
}

void fillRandom(int array[SIZE][SIZE]){
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = rand() % 20 + 1;
        }
    }
}

void printArray(int array[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if(array[i][j]<10) printf("0");
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

void movePointer(void*array){
    int a=*(int*)array,b=0,x=0,y=0;
    do {
        a=*((int*)array+b);
        x=b%10;
        y=b/10;
        printf("현 위치:(%d,%d)\t배열의 값:%d\n",x,y,a);
        b+=a;
    } while(b<100);
    printf("종료 위치:(%d,%d)\t배열의 값:%d",x,y,a);
}
