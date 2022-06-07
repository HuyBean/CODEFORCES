#include <iostream>
using namespace std;
bool IsSame(int *a, int n, int count)
{
    if (count == n - 1)
        return true;
    if (a[count] == a[count + 1])
        return 1 && IsSame(a, n, count + 1);
    else
        return false;
}
int FindMin(int *a, int n)
{
    int Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }
    return Min;
}
int equal(int *a, int n)
{
    int Total = 0;
    if (IsSame(a, n, 0) == true)
    {
        return 0;
    }
    else
    {
        int Min = FindMin(a, n);
        for (int i = 0; i < n; i++)
        {
            Total += a[i] - Min;
        }
    }
    return Total;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        cout << equal(a[i],m);
        cout << "\n";
    }
    delete[] a;
    return 0;
}