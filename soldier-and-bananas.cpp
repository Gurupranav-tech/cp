#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k, n, w, sum = 0;
	cin >> k >> n >> w;
	for (int i = 0; i < w; i++) sum += k * (i + 1);
	cout << (sum > n ? abs(sum - n) : 0);
}
