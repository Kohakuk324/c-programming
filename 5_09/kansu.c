//c言語の関数について
//特定の処理をまとめてプログラム
#include<stdio.h>

int add(int a,int b);
int add5(int a);

int main(void){
    printf("%d\n",add(32,59));
}

//メイン関数は、プログラム全体で最初に実行される関数
//私たちが作った関数は、すべてメイン関数で実行される

int add(int a,int b){
    a=a+b;
    return 0;
}

//関数はリターンを書く

int add5(int a){
    a=a+5;
    return a;
}