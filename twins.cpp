#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n = 0, sum = 0, taken = 0, tsum = 0;
	cin >> n;
	vector<int> coins(n);
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
		sum += coins[i];
	}
	sort(coins.begin(), coins.end());
	for (int j = coins.size()-1; j >= 0; j--) {
		int i = coins[j];
		tsum += i;
		sum -= i;
		taken++;
		if (tsum > sum) break;
	}
	cout << taken << endl;
}
