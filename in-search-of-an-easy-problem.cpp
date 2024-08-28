#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	bool easy = true;

	while (n--) {
		int x;
		cin >> x;
		if (x == 1) easy = false;
	}

	cout << (easy ? "EASY" : "HARD");
}
