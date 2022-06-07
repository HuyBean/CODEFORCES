#include <iostream>

int main()
{
    int n, m;
    int startx = 100, endx = -100, starty = 100, endy = -100;
    char A[50][50];
    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> A[i][j];
            if (A[i][j] == '*') {
                startx = std::min(startx, i);
                starty = std::min(starty, j);
                endx = std::max(endx, i);
                endy = std::max(endy, j);
            }
        }
    }
    for (int i = startx; i <= endx; i++) {
        for (int j = starty; j<= endy+1; j++) {
            if (j == endy + 1) {
                std::cout << "\n";
            }else std::cout << A[i][j];
        }
    }
    return 0;
}

