#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n=0;
	cin >> n;
	vector<int> people(n);
	for (int i = 0; i < n; i++) cin >> people[i];

	sort(people.begin(), people.end());
	int sum = people[0], satis = 1;
	for (int i = 1; i < n; i++) {
		int ts = sum + people[i], tss = 0;
		for (int j = i+1; j < n; j++) {
			if (people[j] >= ts) tss++;
			ts += people[j];
		}
		if (tss >= 1) {
			int d = people[i+1];
			people[i+1] = people[i];
			people[i] = d;
			if (sum <= people[i]) {
				satis++;
				sum += people[i];
			}
		} else if (sum <= people[i]) {
			satis++;
			sum += people[i];
		}
	}
	// for (int i = 0 ; i < n; i++) {
	// 	if (people[i] >= sum) {
	// 		satis ++;
	// 		sum += people[i];
	// 	} else {
	// 		int d = people[i];
	// 		people.erase(people.begin() + i);
	// 		people.push_back(d);
	// 	}
	// }

	cout << satis << endl;
}
