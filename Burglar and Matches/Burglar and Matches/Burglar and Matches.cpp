#include<iostream>
#include<algorithm>

using namespace std;
struct Container {
    long long box;
    long long matches;
};
int cmp(Container a, Container b) {
    return a.matches > b.matches;
}
Container A[20];
int main() {
    int n, m;
    long long ans = 0;
    std::cin >> n >> m;
    for (int i = 0; i < m; i++) {
        std::cin >> A[i].box >> A[i].matches;
    }
    sort(A, A + m, cmp);
    for (int i = 0; i < m; i++) {
        if (A[i].box <= n) {
            ans += A[i].box * A[i].matches;
            n -= A[i].box;
        }
        else if (A[i].box > n) {
            ans += n * A[i].matches;
            n = 0;
        }
        if (!n)
            break;
    }

    std::cout << ans << "\n";
    return 0;
}


