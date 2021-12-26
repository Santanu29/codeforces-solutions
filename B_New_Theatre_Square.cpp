#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    y = min(y, 2 * x);
    ll ans = 0;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (j != 0 && (arr[i][j] == '.' && arr[i][j - 1] == '.'))
            {
                arr[i][j] = '*';
                arr[i][j - 1] = '*';
                ans += y;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
                ans += x;
        }
    }
    cout << ans << endl;
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