#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, t;
	string queue;
	cin >> n >> t >> queue;

	while (t--) {
		for (int i = 0; i < queue.size() - 1; i++) {
			if (queue[i] == 'B' && queue[i + 1] == 'G') {
				queue[i] = 'G';
				queue[i + 1] = 'B';
				i++;
			}
		}
	}

	cout << queue;
}
