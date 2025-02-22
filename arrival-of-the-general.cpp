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
  vec<u8> a(n), b(n);
  for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    a[i] = x;b[i] = x;
  }
  sort(b.begin(), b.end());
  int smallest = b[0], largest = b[n - 1];
  int sidx = distance(begin(a), min_element(rbegin(a), rend(a)).base()) - 1, 
    lidx = find(a.begin(), a.end(), largest) - a.begin();
  int swaps = lidx + n - sidx - 1;
  if (lidx > sidx) swaps--;
  cout << swaps << endl;
}
