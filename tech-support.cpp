#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string m;
        cin >> m;
        int ok = 0;
        for (int i = 0; i < n; i++) {
            if (m[i] == 'Q') ok++;
            else ok--;
        }
        if (ok <= 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
