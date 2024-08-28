#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n, p;
    cin >> n;
    vector<int> f(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> p;
        f[p] = i;
    }

    cout << f[1];
    for (int i = 2; i <= n; i++) {
        cout << " " << f[i];
    }
    cout << "\n";
}
