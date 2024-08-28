#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	const char* word = "hello";
	int pos = 0;
	string s;
	cin >> s;

	for (const char& c : s) {
		if (c == word[pos]) {
			pos++;
			if (pos == 5){
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;
	return 0;
}
