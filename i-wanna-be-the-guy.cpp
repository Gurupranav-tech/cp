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

  int n;
  cin >> n;
  bool *arr = new bool[n];
  for (int i = 0; i < n; i++)
    arr[i] = false;
  vector<int> xs(n);
  vector<int> ys(n);

  int x, y;
  cin >> x;
  for (int i = 0; i < x; i++)
    cin >> xs[i];
  cin >> y;
  for (int i = 0; i < y; i++)
    cin >> ys[i];

  for (int a : xs)
    arr[a-1] = true;

  for (int b : ys)
    arr[b-1] = true;

  for (int i = 0; i < n; i++)
    if (!arr[i]) {
      cout << "Oh, my keyboard!\n";
      return 0;
    }
  cout << "I become the guy.\n";
  return 0;
}
