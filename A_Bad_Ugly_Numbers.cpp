#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        string ans = "2";
        for (int i = 0; i < n - 1; i++)
            ans += "3";
        cout << ans << endl;
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