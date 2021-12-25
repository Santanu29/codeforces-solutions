#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    vector<vector<int>> v(n, vector<int>(n));
    int x = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i % 2; j < n; j += 2)
        {
            v[i][j] = x++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1) % 2; j < n; j += 2)
        {
            v[i][j] = x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
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