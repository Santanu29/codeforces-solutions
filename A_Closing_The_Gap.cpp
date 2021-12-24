#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (auto &x : v)
    {
        cin >> x;
        sum += x;
    }

    sort(v.begin(), v.end());
    int diff = v[n - 1] - v[0];

    cout << ((sum % n) == 0 ? 0 : 1) << endl;
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