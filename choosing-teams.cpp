#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
#define vec vector

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int n, k;
  cin >> n >> k;
  vec<int> p(n);
  for (int i = 0; i < n; i++) cin >> p[i];
  sort(p.begin(), p.end());
  int e{};
  for (int i : p) {
    if (p[i] < 5 - k) e++;
  }
  cout << e / 3 << endl;
}
