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
    unsigned int a, b;
    cin >> a >> b;
    unsigned int x = 0;
    for (int i = 0; i < 32; i++) {
      if (pow(2, i) > max(a, b))
        break;
      int bit1 = a & (1 << i), bit2 = b & (1 << i);
      if (bit1)
        x |= (1 << i);
      else
        x &= ~(1 << i);
    }
    cout << (a ^ x) + (b ^ x) << endl;
  }
}
