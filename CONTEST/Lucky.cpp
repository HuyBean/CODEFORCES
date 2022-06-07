#include <iostream>
using namespace std;
int CountDig(int a)
{
    int num = 0;
    while (a > 0)
    {
        num += a % 10;
        a /= 10;
    }
    return num;
}
int CountDig1(int a)
{
    int num = 0;
    int count = 0;
    while (a > 0 && count < 3)
    {
        num += a % 10;
        a /= 10;
        count++;
    }
    return num;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (CountDig(a[i]) - CountDig1(a[i]) == CountDig1(a[i]))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}