#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
#define vec vector

int main(void) {
  ios::sync_with_stdio(false);
  cout << setprecision(20);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    u64 min = 0, max = 0;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      max += ceil(double(x) / m);
      min += x;
    }
    cout << ceil(double(min) / m) << " " << max << endl;
  }
}
