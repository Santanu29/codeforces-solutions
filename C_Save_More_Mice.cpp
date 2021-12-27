#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[k];
    for (ll i = 0; i < k; i++)
        cin >> arr[i];

    sort(arr, arr + k);

    ll c = 0, ans = 0;
    for (ll i = k - 1; i >= 0; i--)
    {
        ll a = arr[i];
        if (a <= c)
            break;
        ll d = n - a;
        c += d;
        ans++;
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