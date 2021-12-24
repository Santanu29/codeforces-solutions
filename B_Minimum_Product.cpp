#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mul(ll a, ll b, ll x, ll y, ll n)
{
    ll d1 = a - x;
    ll d2 = b - y;
    ll c1 = min(d1, n);
    a -= c1;
    n -= c1;
    ll c2 = min(d2, n);
    b -= c2;
    return a * b;
}

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    cout << min(mul(a, b, x, y, n), mul(b, a, y, x, n)) << endl;
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