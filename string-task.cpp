#include <bits/stdc++.h>

using namespace std;

int main(void) {
	string a;
	cin >> a;
	int size = a.size();
	stringstream b;

	for (int i = 0; i < size; i++) {
		a[i] = tolower(a[i]);
		char x = a[i];
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y') {
		} else {
			b << ".";
			b << x;
		}
	}
	cout << b.str() << "\n";
}
