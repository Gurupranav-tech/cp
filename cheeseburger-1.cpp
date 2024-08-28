#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int S, D, K;
		cin >> S >> D >> K;
		bool possible = (2 * (S + D) >= K + 1) && (S + 2 * D) >= K;
		cout << "Case #" << i + 1 << ": " << (possible ? "YES" : "NO") << "\n";
	}
}
