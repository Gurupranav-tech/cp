#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

int mad(vector<int> arr) {
	sort(arr.begin(), arr.end());
	for (int i = arr.size()-1; i >= 0; i--) {
		int a = arr[i], c = 0;
		for (int i = 0; i < arr.size(); i++)
			if (a == arr[i]) c++;
		if (c >= 2) return a;
	}
	return 0;
}

void print_array(vector<int>& arr) {
	for (int i : arr) cout << i << " ";
	cout << endl;
}

bool arr_dead(vector<int>& dead) {
	bool d = true;
	for (int i : dead)
		if (i != 0) d = false;
	return d;
}

int add(vector<int>& arr) {
	int sum = 0;
	for (int i : arr) sum += i;
	return sum;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t{};
	cin >> t;
	while (t--) {
		int sum = 0, n{};
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];

		while (!arr_dead(arr)) {
			sum += add(arr);
			vector<int> b(n);
			for (int i = 0; i < n; i++) {
				b[i] = mad(vector<int>(arr.begin(), arr.begin() + i + 1));
			}
			arr = b;
		}

		cout << sum << endl;
	}

}
