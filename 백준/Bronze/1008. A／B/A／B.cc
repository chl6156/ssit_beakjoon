#include <stdio.h>

int main(int agrc, char const *argv[]){
    double a, b;
    
    scanf("%lf %lf", &a, &b);
    
    printf("%.10lf", a/b);
    return 0;
}