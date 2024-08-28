#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
    string a;
    cin >> a;

    int dangerous = 1;
    char current = a[0];

    for (int i = 1; i < a.size(); i++) {
        if (current == a[i]) dangerous++;
        else  {
            current = a[i];
            dangerous = 1;
        }
        if (dangerous >= 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
