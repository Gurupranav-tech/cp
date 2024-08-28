#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long int n, count = 0;
	cin >> n;

	while (n != 0) {
		auto digit = n % 10;
		if (digit == 4 || digit == 7) count++;
		n /= 10;
	}

	if (count == 4 || count == 7) cout << "YES";
	else cout << "NO";
}
