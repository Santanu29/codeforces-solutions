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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    fr(n) cin >> arr[i];

    int i = 0, j = n - 1;

    if (arr.front() == arr.back())
    {
        int cnt = 0;
        fr(n)
        {
            if (arr[i] == arr[0])
                cnt++;
        }
        if (cnt >= k)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        int cnt1 = 0, cnt2 = 0;
        int i = 0;

        for (; i < n; i++)
        {
            if (arr[0] == arr[i])
                cnt1++;
            if (cnt1 == k)
                break;
        }

        int j = i + 1;
        for (; j < n; j++)
        {
            if (arr[j] == arr[n - 1])
                cnt2++;
        }

        if (cnt2 >= k)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
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
    w(t) solve();
    // timetaken;
    return 0;
}