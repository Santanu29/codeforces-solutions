#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define ff first
#define ss second
#define pb push_back
#define MOD 1000000007
#define inf 5e18
#define ps(x, y) fixed << setprecision(y) << x
#define all(v) begin(v), end(v)
#define fr(n) for (int i = 0; i < n; i++)
#define frj(n) for (int j = 0; j < n; j++)
#define fro(n) for (int i = 1; i < n; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define endl "\n"
#define timetaken cerr << "Time : " << 1000 * (long double)clock() / (long double)CLOCKS_PER_SEC << "ms\n"

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    int i = 0;

    if (s[0] == '9')
        i++;

    for (; i < n; i++)
    {
        char &ch = s[i];
        if (ch >= '5')
        {
            int diff = '9' - ch;
            ch = '0' + diff;
        }
    }

    cout << s << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}