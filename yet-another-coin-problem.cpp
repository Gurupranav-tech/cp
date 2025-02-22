#include <bits/stdc++.h>
#include <climits>
#include <cstdint>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
#define vec vector

int steps(int n) {
  if (n <= 0) return 0;
  int coins = n / 15;
  n %= 15;
  coins += n / 6;
  n %= 6;
  coins += n / 3;
  n %= 3;
  coins += n;
  return coins;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> choices;
    for (int i = 0; i <= 2; i++) {
      if (i * 10 > n) continue;
      choices.push_back(steps(n - i * 10) + i);
    }
    sort(choices.begin(), choices.end());
    int coins = choices[0];
    cout << coins << endl;
  }
}
