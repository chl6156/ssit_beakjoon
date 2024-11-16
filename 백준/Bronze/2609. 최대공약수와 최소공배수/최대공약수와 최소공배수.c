#include <stdio.h>

int main(void){
    int a,b;

    int min = 0;
    int max = 0;

    scanf("%d %d", &a, &b);
    // 최대 공약수
    for (int i = 1; i <= a; i++)
    {
        if(a%i == 0 && b%i == 0) max = i;
    }
    printf("%d\n", max);
    

    // 최소 공배수
    for (int i = a*b; i >= 1; i--)
    {
        if(i%a==0 && i%b==0) min = i;
    }
    printf("%d", min);

    return 0;
}