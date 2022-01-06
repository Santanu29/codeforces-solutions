#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<ll> a;
    a.push_back(0);
    a.push_back(2);
    for (ll i = 2; i <= 100000; i++)
    {
        ll val = a[i - 1] + (i - 1) + (i * 2);
        a.push_back(val);
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;

        while (n > 1)
        {
            int index = lower_bound(a.begin(), a.end(), n) - a.begin();
            ans++;
            n = n - (a[index] == n ? a[index] : a[index - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}