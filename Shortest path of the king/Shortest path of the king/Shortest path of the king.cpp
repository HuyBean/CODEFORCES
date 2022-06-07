#include<iostream>
#include<stdio.h>


struct Position
{
    char x;
    int y;
};
Position Start;
Position End;
int main()
{
    std::cin >> Start.x >> Start.y >> End.x >> End.y;
    int startx = Start.x - 'a';
    int endx = End.x - 'a';
    int dx = endx - startx;
    int dy = End.y - Start.y;
    int ma = std::max(abs(dx), abs(dy));
    int mi = std::min(abs(dx), abs(dy));
    if (dx >= 0 && dy >= 0)
    {
        std::cout << ma << std::endl;
        for (int i = 0; i < mi; i++)  std::cout << "RU \n";
        for (int i = mi; i < ma; i++) {
            if (dx == ma)std::cout << "R \n";
            else std::cout << "U \n";
        }
    }
    else if (dx < 0 && dy < 0)
    {
        dx *= -1;
        dy *= -1;
        std::cout << ma << std::endl;
        for (int i = 0; i < mi; i++)
            std::cout << "LD \n";
        for (int i = mi; i < ma; i++)
        {
            if (dx == ma)std::cout << "L \n";
            else std::cout << "D \n";
        }
    }
    else if (dx >= 0 && dy < 0)
    {
        dy *= -1;
        std::cout << ma << std::endl;
        for (int i = 0; i < mi; i++)
            std::cout << "RD \n";
        for (int i = mi; i < ma; i++) {
            if (dx == ma)std::cout << "R \n";
            else std::cout << "D \n";
        }
    }
    else if (dx < 0 && dy >= 0)
    {
        dx *= -1;
        std::cout << ma << std::endl;
        for (int i = 0; i < mi; i++)
            std::cout << "LU \n";
        for (int i = mi; i < ma; i++) {
            if (dx == ma)std::cout << "L \n";
            else std::cout << "U \n";
        }
    }
    return 0;
}
