#include <iostream>

int main()
{
    int cnt = 1;
    int layer = 1;
    int n;

    std::cin >> n;

    while(n > cnt){
        cnt += 6*layer;
        layer++;
    }
    std::cout << layer;
    
    return 0;
}