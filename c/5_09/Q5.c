#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
     srand(time(NULL));
    int N,n,min,max;
    min=1,max=100;
    n= (rand() % (max - min + 1)) + min;
    printf("1~100までのランダムな数%d\n",n);
    printf("予想");
    scanf("%d",&N);
    if(N==n){
        printf("Correct\n");
    }else if(N<=n){
        printf("Too low\n");
    }else if(N>=n){
        printf("Too high\n");
    }
    return 0;
}