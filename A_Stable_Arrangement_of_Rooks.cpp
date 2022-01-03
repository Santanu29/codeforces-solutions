#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > (n + 1) / 2)
    {
        cout << -1 << endl;
        return;
    }

    vector<vector<char>> v;

    for (int i = 0; i < n; i++)
    {
        vector<char> x(n, '.');
        v.push_back(x);
    }

    for (int i = 0; i < k; i++)
    {
        v[i * 2][i * 2] = 'R';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << v[i][j];
        cout << endl;
    }
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