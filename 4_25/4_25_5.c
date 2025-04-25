#include <stdio.h>

int main() {
    int score;
    // scoreが80以上なら「合格」と表示しよう
    scanf("%d",&score);
    if(score>=80){
        printf("合格");
    }else{
        printf("不合格");
    }
    return 0;
}