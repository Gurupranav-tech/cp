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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int steps = (int)ceil(n / 2.0f);
    cout << steps << endl;
    for (int i = 0; i < steps; i++) {
      cout << i * 3 + 1 << " " << (n - i - 1) * 3 + 3 << endl;
    }
  }
}
