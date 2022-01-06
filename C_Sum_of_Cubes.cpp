#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    double x;
    cin >> x;
    if (x == 1)
    {
        cout << "NO\n";
        return;
    }
    double a, b;

    for (ll i = 1; i < cbrt(x); i++)
    {
        a = i * i * i;
        b = cbrt(x - a);
        if (b == floor(b))
        {
            cout << " YES\n";
            return;
        }
    }
    cout << "NO\n";
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