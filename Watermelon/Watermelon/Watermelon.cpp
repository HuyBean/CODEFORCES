

#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	if (n == 2) { std::cout << "NO"; return 0; }
	std::cout << (n % 2 ? "NO" : "YES");
}