#include <iostream>

int main(){
    int a, b;

    std::cin >> a >> b;
    int max = 0;
    int min = 0;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if(a%i == 0 && b%i == 0) max = i;
    }
    std::cout << max << std::endl;

    std::cout << (a*b)/max;
}