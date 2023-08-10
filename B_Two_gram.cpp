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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> m;

    for (int i = 0; i < n - 1; i++)
    {
        string temp = s.substr(i, 2);
        m[temp]++;
    }

    int mx = 0;
    string ans;

    for (auto p : m)
    {
        if (p.ss > mx)
        {
            ans = p.ff;
            mx = p.ss;
        }
    }

    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    // timetaken;
    return 0;
}