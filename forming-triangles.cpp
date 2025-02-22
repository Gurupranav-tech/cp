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
    int n;
    cin >> n;
    map<int, u64> counter;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (counter.find(x) == counter.end())
        counter[x] = 1;
      else
        counter[x] += 1;
    }

    u64 prev = 0, total = 0;
    for (auto [key, value] : counter) {
      if (value >= 3) total += u64(value) * (value - 1) * (value - 2) / 6;
      if (value >= 2) total += value * (value - 1) / 2 * prev;
      prev += value;
    }

    cout << total << endl;
  }
}
