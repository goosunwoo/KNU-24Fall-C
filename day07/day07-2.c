#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void){
    double x = 0;
    double y = 0;
    double sfe=0;
    long long count = 0;
    int circle = 0,ingp=0;
    srand(time(NULL));

    while (count<=1000000000){
        count++;
        x = (double)rand()/(double)RAND_MAX;
        y = (double)rand()/(double)RAND_MAX;
        if(sqrt(pow(x,2.0)+pow(y,2.0))<1) sfe++;

        if (count%10000000==0)
        {
            ingp ++;
            printf("%d%%진행..원주율%f",ingp,4*(sfe/count));
            if(count%100000000==0) circle++;
            for(int i=1;i<=circle;i++) printf("■");
            for(int i=1;i<=10-circle;i++) printf("□");
            printf("\n");
        }
    }
    
}