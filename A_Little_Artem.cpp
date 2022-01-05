#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string s(m, 'B');
    vector<string> v(n, s);

    v[0][0] = 'W';

    for (int i = 0; i < n; i++)
        cout << v[i] << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}