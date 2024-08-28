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

	u64 n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		if (k > n / 2) {
			u64 i = 2;
			for (u64 j = 1; j < k - n / 2; j++) { i += 2; }
			cout << i << endl;
		} else {
			u64 i = 1;
			for (u64 j = 1; j < k; j++){ i += 2; }
			cout << i << endl;
		}
	} else {
		if (k > (n + 1) / 2) {
			u64 i = 2;
			for (u64 j = 1; j < k - ((n + 1) / 2); j++) { i += 2; }
			cout << i << endl;
		} else {
			u64 i = 1;
			for (u64 j = 1; j < k; j++) { i += 2; }
			cout << i << endl;
		}
	}
}
