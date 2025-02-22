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

  string hate = "I hate ", love = "I love ";
  string sentence;
  int n;
  cin >> n;
  sentence += hate;
  for (int i = 2; i <= n; i++) {
    if (i % 2 == 0) sentence += "that " + love;
    else sentence += "that " + hate;
  }
  sentence += "it";
  cout << sentence << endl;
}
