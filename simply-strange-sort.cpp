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
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int steps = 0;
    while (!is_sorted(a.begin(), a.end())) {
      for (int i = steps % 2; i + 1 < n; i += 2) {
        if (a[i] > a[i + 1]) {
          swap(a[i], a[i + 1]);
        }
      }
      steps += 1;
    }
    cout << steps << endl;
  }
}
