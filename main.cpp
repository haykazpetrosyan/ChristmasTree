#include <iostream>

int main()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    for (int j = 1; j<=a; j++)
    {
        int k = (j*b)/a;
    for (int o = 1; o<=k-j; o++)
    {
        std::cout << " ";
    }    
    for (int l = 1; l<=k; l++)
    {
        std::cout << "*";
    } 
    std::cout << std::endl;   
    }
    return 0;
}