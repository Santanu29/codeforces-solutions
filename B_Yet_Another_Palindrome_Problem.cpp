#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (auto &x : arr)
        cin >> x;

    bool isPal = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isPal = true;
                break;
            }
        }
    }

    cout << (isPal ? "YES" : "NO") << endl;
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