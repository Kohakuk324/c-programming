#include <stdio.h>

// ここに関数を定義しよう
int add(int a,int b){
    return a+b;
}
int main() {
    // 関数を呼び出そう
    int result = add(3,5);
    printf("3+5=%d\n",result);
    return 0;
}