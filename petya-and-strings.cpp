#include <iostream>
#include <cctype>

using namespace std;

int main(void) {
	string a;
	string b;
	cin >> a >> b;

	for (int i = 0; i < a.size(); i++) {
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	
	if (a == b) cout << 0;
	if (a > b) cout << 1;
	if (a < b) cout << -1;
}
