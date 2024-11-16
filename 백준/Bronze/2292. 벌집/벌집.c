#include <stdio.h>

int main(void){
    int cnt = 1;
    int layer = 1;
    int n;
    scanf("%d", &n);

    while(n > cnt){
        cnt += 6*layer;
        layer++;
    }
    printf("%d", layer);

    return 0;
}