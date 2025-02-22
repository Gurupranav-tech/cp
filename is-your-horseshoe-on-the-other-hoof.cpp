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

  vec<u64> colors;
  for (int i = 0; i < 4; i++) {
    u64 color;
    cin >> color;
    colors.push_back(color);
  }

  set<u64> s;
  for (auto c : colors) s.insert(c);
  cout << 4 - s.size() << endl;
}
