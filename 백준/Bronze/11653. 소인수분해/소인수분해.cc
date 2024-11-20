// 소인수분해

#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    for (int i = 2; i <= N;)
    {
        if(N%i == 0)
        {
            std::cout << i << std::endl;
            N /= i;
        }
        else i++;
    }
    return 0;
}