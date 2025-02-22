#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
#define vec vector

constexpr ll MOD = 1e9 + 7;

map<int, int> memo{};

int compute(int n) {
  if (memo.find(n) != memo.end()) 
    return memo[n];

  int x = 2;
  for (int i = 1; i < n; i++) {
    x = (2LL * x) % MOD;
  }

  return x;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t; cin >> t;
	vector<int> ks(t);
	for (int k = 0; k < 2; k++)
		for (int i = 0; i < t; i++)
			cin >> ks[i];
	
	vector<int> ans(1 + *max_element(ks.begin(), ks.end()), 1);
	for (int i = 1; i < (int)ans.size(); i++)
		ans[i] = (2LL * ans[i - 1]) % MOD;
	
	for (int k : ks)
		cout << ans[k] << '\n';
	return 0;
}

