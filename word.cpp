#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string data;
	cin >> data;
	int upper = 0;
	for (char d : data) {
		upper += isupper(d) ? 1 : 0;
	}
	if (upper > data.size() - upper) {
		transform(data.begin(), data.end(), data.begin(), [](char c) { return toupper(c); });
		cout << data;
	} else {
		transform(data.begin(), data.end(), data.begin(), [](char c) { return tolower(c); });
		cout << data;
	}
}
