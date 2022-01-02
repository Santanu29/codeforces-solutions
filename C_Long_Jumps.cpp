#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &x : arr)
        cin >> x;

    int dp[n];

    for (int i = n - 1; i >= 0; i--)
    {
        dp[i] = arr[i];
        int j = i + arr[i];
        if (j < n)
            dp[i] += dp[j];
    }

    cout << *max_element(dp, dp + n) << endl;
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