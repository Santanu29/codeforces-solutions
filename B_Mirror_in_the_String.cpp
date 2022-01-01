#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << s[0];
    int i = 1;
    while (i < n && (s[i] < s[i - 1] || (i > 1 && s[i] == s[i - 1])))
    {
        i++;
        cout << s[i - 1];
    }

    for (int j = i - 1; j >= 0; j--)
        cout << s[j];
    cout << endl;
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