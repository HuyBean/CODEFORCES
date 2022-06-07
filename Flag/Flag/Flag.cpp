#include <iostream>
int n, m;
char A[101][101];

int main()
{
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        std::cin >> A[i] + 1;
        if (A[i][1] == A[i - 1][1]) {
            std::cout << "NO";
            return 0;
        }
        for (int j = 2; j <= m; j++) {
            if(A[i][j]!=A[i][j-1]) {
                std::cout << "NO";
                return 0;
            }
        }
    }
    std::cout << "YES";
    return 0;
}

