#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	scanf("%i\n", &n);
	double j = 0, t = 0;

	while (n--)
	{
		int p;
		scanf("%i", &p);
		j += p;
		t += 100;
	}

	cout << j / t * (double)100.0 << endl;
}
