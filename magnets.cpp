#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, g = 0;
    std::string prev, cur;
    cin >> n;
    while (n--)
    {
        cin >> cur;
        if (prev == cur)
            continue;
        prev = cur;
        g++;
    }
    cout << g << endl;
}
