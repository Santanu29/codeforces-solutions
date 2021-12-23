#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even % 2 != odd % 2)
        cout << "NO" << endl;
    else
    {
        if (even % 2 == 0)
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[i] % 2 != arr[j] % 2 && abs(arr[i] - arr[j]) == 1)
                    {
                        cout << "YES" << endl;
                        return;
                    }
                }
            }
            cout << "NO" << endl;
        }
    }
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