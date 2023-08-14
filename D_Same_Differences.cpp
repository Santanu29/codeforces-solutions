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
    unordered_map<int, int> m;
    ll res = 0;

    fr(n)
    {
        int x;
        cin >> x;
        x -= i;
        res += m[x];
        m[x]++;
    }

    cout << res << "\n";
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
    w(t) solve();
    // timetaken;
    return 0;
}