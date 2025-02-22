#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
#define vec vector

u64 calc_water(const vec<int>& arr, int h) {
  u64 water = 0;
  for (const auto& i : arr) {
    if (i >= h) continue;
    water += u64(h) - i;
  }
  return water;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, x;
    u64 bh = 0;
    cin >> n >> x;
    vec<int> arr(n);
    for (int& j : arr) cin >> j;
    sort(arr.begin(), arr.end());

    u64 low = 1, high = x + arr[0];
    while (low <= high) {
      u64 h = (low + high) / 2;
      u64 water = calc_water(arr, h);
      if (water <= u64(x)) {
        low = h + 1;
        if (h > bh) bh = h;
      } else {
        high = h - 1;
      }
    }
    cout << bh << endl;
  }
}
