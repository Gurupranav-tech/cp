#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string t, s;
	cin >> t >> s;
	reverse(s.begin(), s.end());
	if (t == s) cout << "YES";
	else cout << "NO";
}
