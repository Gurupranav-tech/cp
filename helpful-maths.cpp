#include <bits/stdc++.h>

using namespace std;

int main(void) {
	string expr;
	cin >> expr;
	vector<int> numbers;

	for (auto e : expr) {
		if (e != '+') {
			numbers.push_back((int)e - (int)'0');
		}
	}

	sort(numbers.begin(), numbers.end());

	stringstream ss;
	for (int i = 0; i < numbers.size(); i++) {
		ss << numbers[i];
		if (i != numbers.size() - 1) {
			ss << "+";
		}
	}

	cout << ss.str() << "\n";
}
