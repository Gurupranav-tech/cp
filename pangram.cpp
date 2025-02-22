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

  int n = 0;
  int arr[26] = {false};
  cin >> n;
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (islower(c)) arr[c - 'a'] = true;
    else arr[tolower(c) - 'a'] = true;
  }

  for (int i = 0; i < 26; i++)
    if (!arr[i]) {
      cout << "NO\n";
      return 0;
    }
  cout << "YES\n";
}
