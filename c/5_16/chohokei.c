//長方形の面積を求める関数を作りなさい
//2つの値を受け取り、その値を掛け算した値を返す関数
#include<stdio.h>
//関数のプロトタイプ宣言
float chohokei(float a,float b);
//main関数
int main(void){
    float s=chohokei(5.0,3.0);
    printf("%f\n",s);//関数を呼び出すことができる
    return 0;
}
//chohokei関数
float chohokei(float a,float b/*引数*/){
    //長方形の面積を求める内容->縦と横の掛け算
    float s;
    s=a*b;
    return s;
}