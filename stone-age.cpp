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

  int n, q;
  u64 sum = 0;
  cin >> n >> q;
  vec<int> arr(n), last1(n,-1);
  int last2 = -2, lastVal= 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += u64(arr[i]);
  }

  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      int j, x;
      cin >> j >> x;
      j--;
      if (last1[j] > last2) {
        sum +=u64( x) - arr[j];
      } else {
        sum +=u64( x) - lastVal;
      }
      arr[j] = x;
      last1[j] = i;
    } else {
      last2 = i;
      cin >> lastVal;
      sum = u64(n) * lastVal;
    }
    cout << sum << endl;
  }
}
