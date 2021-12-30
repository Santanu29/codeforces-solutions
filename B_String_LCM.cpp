#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    if (s.size() == t.size())
    {
        cout << (s == t ? s : "-1") << endl;
        return;
    }

    if (s.size() > t.size())
        swap(s, t);

    int sl = s.length();
    int tl = t.length();
    int n = (sl * tl) / __gcd(sl, tl);

    string ans = "";

    for (int i = 0; i < n / sl; i++)
        ans += s;

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != t[k])
        {
            cout << -1 << endl;
            return;
        }
        k++;
        k %= tl;
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
