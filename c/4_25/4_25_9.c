#include <stdio.h>

int main() {
    int i,scores[5] = {90, 80, 70, 60, 50};
    // for文を使ってscoresの中身を出力しよう
    for(i=0;i<=4;i++){
        printf("%d\n",scores[i]);
    }
    return 0;
}