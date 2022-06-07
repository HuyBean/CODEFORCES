#include<iostream>
int main()
{
    int i, j, k = 6, a, b, c;
    std::cin >> a >> b;
    if (a >= b) c = a;
    else c = b;
    j = 6 - c + 1;
    for (i = 1; i <= 6; i++)
    {
        if (j % i == 0 && k % i == 0)
        {
            j /= i;
            k /= i;
        }
    }
    std::cout << j << "/" << k;
    return 0;
}