#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int n, h, width = 0;
	cin >> n >> h;

	while (n--) {
		int a;
		cin >> a;
		if (a > h) width += 2;
		else width++;
	}

	cout << width;
}
