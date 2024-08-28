#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

  std::string dna;
  cin >> dna;
  auto size = dna.size();
  int longest = 0, tlongest = 1;
  char first = dna[0], second = dna[0];
  for (size_t i = 0; i < size; i++) {
    first = dna[i];
    if (first != second) {
      second = first;
      longest = 0;
    }
    longest++;
    if (longest > tlongest) tlongest = longest;
  }

  cout << tlongest << endl;
}
