#include<stdio.h>
int main(void){
    char c;
    scanf("%s",&c);
    int a,b,d;
    scanf("%d",&a);
    scanf("%d",&b);
    if(c=='+'){
        d=a+b;
        printf("%d",d);
    }else if(c=='-'){
        d=a-b;
        printf("%d",d);
    }else if(c=='*'){
        d=a*b;
        printf("%d",d);
    }else if(c=='/'){
        d=a/b;
        printf("%d",d);
    }else{
        printf("Invalid operator");
    }
return 0;
}