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
	cin.tie(0);
  cout << setprecision(20);

  int t;
  cin >> t;
  vec<tuple<int, int>> points(3);
  while (t--) {
    points.clear();
    for (int i = 0; i < 3; i++) {
      int x, y;
      cin >> x >> y;
      points.push_back(make_pair(x, y));
    }
    double length = 0;
    int sameY = 0, diffY = 0;
    bool found = false;
    tuple<int, int> p1, p2;
    for (auto& [x1, y1] : points) {
      for (auto& [x2, y2] : points) {
        if (x1 == x2 && y1 == y2) continue;
        if (y1 == y2) {
          p1 = make_pair(x1, y1);
          p2 = make_pair(x2, y2);
          sameY = y1;
          found = true;
          break;
        }
      }
      if (sameY != y1) diffY = y1;
    }
    if (found && diffY < sameY) {
      auto [x1, y1] = p1;
      auto [x2 , y2] = p2;
      length = sqrt(pow(double(x1) - x2, 2) + pow(double(y1) - y2, 2));
    }
    cout << length << endl;
  }
}
