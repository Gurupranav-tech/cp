#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, y = 0;
	cin >> a >> b;
	while (true) {
		a *= 3;
		b *= 2;
		y++;
		if (a > b) break;
	}
	cout << y;
}
