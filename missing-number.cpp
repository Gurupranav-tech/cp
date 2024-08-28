#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

  ll n;
  cin >> n;
  ll sum = n * (n + 1) / 2;
  n--;
  while (n--) {
    ll a;
    cin >> a;
    sum -= a;
  }

  cout << sum << endl;
}
