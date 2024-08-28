#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, won = 0;
	string game;
	cin >> n >> game;
	for (char c : game) {
		if (c == 'D') won--;
		else won++;
	}
	

	if (won == 0) cout << "Friendship";
	else if (won < 0) cout << "Danik";
	else cout << "Anton";
}
