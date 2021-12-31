#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (auto &x : arr)
        cin >> x;

    sort(arr, arr + n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] <= i + 1)
        {
            cout << i + 2 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}