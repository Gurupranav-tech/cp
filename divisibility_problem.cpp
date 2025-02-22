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
    u64 a, b;
    cin >> a >> b;
    if (a % b == 0) {
      cout << 0 << endl;
      continue;
    }
    cout << b - (a % b) << endl;
  }
}
