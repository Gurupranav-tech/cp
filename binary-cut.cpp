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
    string s;
    cin >> s;
    int pieces = 1, magic = 0;
    for (int i = 1; i < s.size(); i++) {
      if (s[i] != s[i-1]) pieces++;
      if (s[i] == '1' && s[i-1] == '0') magic = 1;
    }
    cout << pieces - magic << endl;
  }
}
