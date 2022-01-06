#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> v;
    s += "R";
    int mx = 1;
    v.push_back(0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
            v.push_back(i + 1);
    }

    int ans = 0;
    for (int i = 1; i < v.size(); i++)
    {
        ans = max(ans, v[i] - v[i - 1]);
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