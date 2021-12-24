#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == 0 || b == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = min({a, b, (a + b) / 3});
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