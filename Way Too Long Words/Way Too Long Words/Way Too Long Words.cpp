#include<iostream>

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string A;
		std::cin >> A;
		if (A.length() <= 10) std::cout << A.c_str() << "\n";
		else std::cout << A[0] << A.length() - 2 << A[A.length() - 1]<<"\n";
	}
	return 0;
}
