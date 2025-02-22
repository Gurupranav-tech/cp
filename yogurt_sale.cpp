#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
#define vec vector

int main(void) {

  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    if (b >= 2 * a)
      sum = n * a;
    else {
      if (n % 2 == 0) sum = b * n / 2;
      else sum = b * (n - 1) / 2 + a;
    }
    cout << sum << "\n";
  }
}
