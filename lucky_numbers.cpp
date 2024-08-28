#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool lucky(int n)
{
	while (n != 0)
	{
		int d = n % 10;
		n /= 10;

		if (d != 4 && d != 7)
			return false;
	}
	return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	bool lucky_number = false;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			if (lucky(i))
			{
				lucky_number = true;
				break;
			}
	}

	cout << (lucky_number == true ? "YES" : "NO");
}
