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
    int n, k;
    cin >> n >> k;
    vec<int> arr(2 * n);
    map<int, int> lmap{}, rmap{};
    vec<int> left, right;

    for (int i = 0; i < 2 * n; i++)
      cin >> arr[i];

    for (int i = 0; i < n; i++) {
      lmap[arr[i]]++;
      rmap[arr[n + i]]++;

      if (lmap[arr[i]] == 2) {
        left.push_back(arr[i]);
        left.push_back(arr[i]);
      }
      if (rmap[arr[n + i]] == 2) {
        right.push_back(arr[n + i]);
        right.push_back(arr[n + i]);
      }
    }

    for (int i = left.size(); i > 2 * k; i--) {
      left.pop_back();
      right.pop_back();
    }

    if (left.size() != 2 * k) {
      for (auto [key, value] : lmap) {
        if (value == 1 && rmap.find(key) != rmap.end() && rmap[key] == 1) {
          left.push_back(key);
          right.push_back(key);
        }

        if (left.size() == 2 * k)
          break;
      }
    }

    for (auto i : left)
      cout << i << " ";
    cout << endl;
    for (auto i : right)
      cout << i << " ";
    cout << endl;
  }
}
