#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 == x2 && y1 == y2)
		{
			cout << "YES\n";
		}
		else if (x2 - x1 == y2 || y2 - y1 == x2)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}
}
