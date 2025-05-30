#include <stdio.h>

int main() {
    int a,b,c,N;
    scanf("%d",&N);
    a=0,b=1;
    printf(" %d",a);
    while(b<N) {
        printf(" %d",b);
        c=a+b;
        a=b;
        b=c;
        }
    return 0;
}