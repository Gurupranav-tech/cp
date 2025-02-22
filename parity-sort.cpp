#include <algorithm>
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
    vec<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vec<int> copy = arr;
    sort(copy.begin(), copy.end());
    bool ok = true;
    for (int i = 0; i < n; i++) {
      if (arr[i] % 2 != copy[i] % 2) {
        cout << "NO" << endl;
        ok = false;
        break;
      }
    }
    if (ok) cout << "YES" << endl;
  }
}
