#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n & 1) + countSetBits(n >> 1);
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m + 1];

    for (int i = 0; i < m + 1; i++)
        cin >> arr[i];

    int ans = 0;
    for (int i = 0; i < m; i++)
        if (countSetBits(arr[i] ^ arr[m]) <= k)
            ans++;

    cout << ans << endl;

    return 0;
}