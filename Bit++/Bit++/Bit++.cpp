#include<iostream>

int main()
{
    int n;
    std::cin >> n;
    std::string statement;
    int x = 0;
    while (n--) {
        std::cin >> statement;
        if (statement.find("++") != std::string::npos) {
            ++x;
        }
        else {
            --x;
        }
    }
    std::cout << x << std::endl;
    return 0;
}