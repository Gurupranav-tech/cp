#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
#define vec vector

int compute(int n, int m) {
  if (n == m) return 0;
  if (n % 3 != 0) return -1;
  int a = n / 3, b = 2 * n / 3;
  int x = compute(a, m), y = compute(b, m);
  if (x >= 0 || y >= 0) return 0;
  return -1;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    if (!compute(n, m)) cout << "YES\n";
    else cout << "NO\n";
  }
}
