

#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        int a = 0, b = 0;
        std::cin >> n;
        for(int i =0;i<2*n;i++){
            std::cin >> x;
            if (x % 2 == 1) {
                a++;
            }
            else b++;
        }
        if (a == b)
        {
            std::cout << "Yes" << std::endl;
        }
        else std::cout << "No" << std::endl;
    }
    return 0;
}
