#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<bool> arr(300, false);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (arr[150 + a])
            arr[150 - a] = true;
        else
            arr[150 + a] = true;
    }

    int ans = 0;
    for (bool x : arr)
        if (x)
            ans++;

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