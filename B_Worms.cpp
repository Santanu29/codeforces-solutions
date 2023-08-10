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

// 2 9 12 16 25

void solve()
{
    int n, m;
    cin >> n;
    vector<int> arr(n);
    fr(n) cin >> arr[i];
    fro(n) arr[i] += arr[i - 1];
    cin >> m;

    fr(m)
    {
        int val;
        cin >> val;
        if (val <= arr[0])
        {
            cout << 1 << endl;
            continue;
        }

        if (val == arr[n - 1])
        {
            cout << n << endl;
            continue;
        }

        int l = 0, r = n;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (val > arr[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        cout << l + 1 << endl;
    }

    cout << "\n";
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