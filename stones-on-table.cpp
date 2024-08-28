#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int remove = 0, n;
	string stones;
	cin >> n >> stones;
	for (int i = 0; i < n-1; i++) {
		if (stones[i] == stones[i+1]) remove++;
	}
	cout << remove;
}
