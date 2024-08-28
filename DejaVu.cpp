#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int t;
    cin >> t;
    vector<ll> a(100000), x(100000);
    while (t--) {
        int n, q;
        cin >> n >> q;

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < q; i++) cin >> x[i];

        for (int i = 0; i < q; i++)
            for (int j = 0; j < n; j++) {
                if (a[j] % (ll)pow(2, x[i]) == 0)
                    a[j] += (ll)pow(2, x[i]-1);
            }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}
