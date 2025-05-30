#include <stdio.h>

int main() {
    // 1の段：1×1〜1×9まで表示
    int i;
    for(i=1;i<=9;i++){
        printf("1 * %d = %d\n",i,i);
    }
    return 0;
}