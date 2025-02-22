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
  vector<int> mat(n);
  for (int i = 0; i < n; i++)
    cin >> mat[i];
  sort(mat.begin(), mat.end());
  for (int i : mat)
    cout << i << " ";
  cout << endl;
}
