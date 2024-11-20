// 소인수분해

#include <stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    for (int i = 2; i <= N;)
    {
        if(N%i == 0)
        {
            printf("%d\n", i);
            N = N/i;
        }
        else i++;
    }
    return 0;
}