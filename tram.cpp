#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int highest = 0;
	int count = 0;

	while (n--) {
		int a, b;
		cin >> a >> b;
		count = count - a + b;
		highest = max(highest, count);
	}

	cout << highest;
}
