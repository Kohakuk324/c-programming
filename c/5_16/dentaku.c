#include<stdio.h>
float tasu(float x,float y);
float hiku(float x,float y);
float kakeru(float x,float y);
int main(void){
    float a,b,c;
    int mode;
    printf("モードを選択（1=+,2=-,3=*）\n");
    scanf("%d",&mode);
    printf("1つ目の値を入力\n");
    scanf("%f",&a);
    printf("２つ目の値を入力\n");
    scanf("%f",&b);
    if(mode==1){
        printf("足し算\n");
        c=tasu(a,b);
    }else if(mode==2){
        printf("引き算\n");
        c=hiku(a,b);
    }else if(mode==3){
        printf("掛け算\n");
        c=kakeru(a,b);
    }
    printf("答えは%fです\n",c);
    return 0;
}
float tasu(float x,float y){
    float A;
    A=x+y;
    return A;
}
float hiku(float x,float y){
    float A;
    A=x-y;
    return A;
}
float kakeru(float x,float y){
    float A;
    A=x*y;
    return A;
}