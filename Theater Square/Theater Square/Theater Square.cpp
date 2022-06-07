#include<iostream>

#include <math.h>
int main() {
    long long n, m, a, l, b;
    std::cin >> n >> m >> a;
    l = n / a;
    if (n % a != 0)
        l++;
    b = m / a;
    if (m % a != 0)
        b++;
    std::cout << l * b;
    return 0;
}