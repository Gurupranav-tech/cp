#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

  string l1, l2;
  string l3;
  cin >> l1 >> l2;
  for (u16 i = 0; i < l1.size(); i++) {
    if (l1[i] == l2[i]) l3 += '0';
    else l3 += '1';
  }
  cout << l3 << endl;
}
