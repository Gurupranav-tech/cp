#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, p, q, free = 0;
	cin >> n;

	while (n--) {
		cin >> p >> q;
		if (q - p >= 2) free++;
	}

	cout << free;
}
