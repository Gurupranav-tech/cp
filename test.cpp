#include <bits/stdc++.h>

using namespace std;

class A {
public:
	int a;
	A(int _a) { a = _a; }
};

int main() {
	A a(5);
	auto& b = a;

	cout << a.a << endl;
	b.a = 6;
	cout << a.a << endl;
	cout << b.a << endl;
}
