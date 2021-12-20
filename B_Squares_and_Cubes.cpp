#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> s;
        for (ll i = 2; i * i <= n; i++)
        {
            s.insert(i * i);
            if (i * i * i <= n)
                s.insert(i * i * i);
        }
        cout << (s.size() + 1) << endl;
    }
    return 0;
}