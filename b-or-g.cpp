#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string name;
	cin >> name;
	set<char> s;

	for_each(name.begin(), name.end(), [&](char c) {
			s.insert(c);
			});
	cout << (s.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}
