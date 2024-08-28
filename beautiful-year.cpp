#include <bits/stdc++.h>

using namespace std;

bool is_unique(int n);

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int year;
	cin >> year;
	while(true) {
		year++;
		if (is_unique(year)) {
			cout << year;
			break;
		}
	}
}

bool is_unique(int n) {
	int length = 0;
	set<int> digits;

	while (n != 0) {
		length++;
		digits.insert(n % 10);
		n /= 10;
	}

	return digits.size() == length;
}
