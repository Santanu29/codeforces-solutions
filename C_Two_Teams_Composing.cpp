#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }

        int mx = *max_element(v.begin(), v.end());
        int diff = n + 1 - count(v.begin(), v.end(), 0);
        cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
    }

    return 0;
}