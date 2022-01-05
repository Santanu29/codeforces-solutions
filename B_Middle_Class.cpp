#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    if (v[0] < x)
    {
        cout << 0 << endl;
        return;
    }

    int count = 1;

    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
        if ((double)v[i] / (i + 1) >= (double)x)
            count++;

        else
            break;
    }

    cout << count << endl;
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