#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

char lookup[] = {
  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
};

string tohex(int n) {
  string hex = "0x", dum = "";

  do {
    int a = n % 16;
    dum += lookup[a];
    n = n / 16;
  } while (n != 0);
  reverse(dum.begin(), dum.end());
  hex += dum;

  return hex;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
  int n;
  cin >> n;
  cout << tohex(n) << endl;
}
