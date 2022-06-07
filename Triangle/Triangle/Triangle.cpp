#include<iostream>

int d[][3] = { {0,1,2},{0,1,3},{0,2,3},{1,2,3} };
int a[4];
int fun(int* b) {
	if (a[b[0]] + a[b[1]] > a[b[2]] && a[b[2]] + a[b[1]] > a[b[0]] && a[b[0]] + a[b[2]] > a[b[1]])
		if (a[b[0]] - a[b[1]] < a[b[2]] && a[b[2]] - a[b[1]] < a[b[0]] && a[b[0]] - a[b[2]] < a[b[1]])
			return 1;
	if (a[b[0]] + a[b[1]] == a[b[2]] || a[b[2]] + a[b[1]] == a[b[0]] || a[b[0]] + a[b[2]] == a[b[1]])
		return 2;
	return 0;
}
int main() {
	int res, i;
	while (std::cin >> a[0] >> a[1] >> a[2] >> a[3]) {
		for (res = i = 0; i < 4; i++) {
			int k = fun(d[i]);
			if (k == 1) { res = -1; std::cout << "TRIANGLE \n"; break; }
			else if (k == 2)res = k;
		}
		if (res == 2)std::cout << "SEGMENT \n";
		else if (res == 0)std::cout << "IMPOSSIBLE \n";
	}
	return 0;
}
