#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int A[3];
	int res = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> A[0] >> A[1] >> A[2];
		int sum = A[0] + A[1] + A[2];
		if (sum >= 2) res++;
	}
	std::cout << res;
	return 0;
}

