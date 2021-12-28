#include <iostream>
using namespace std;

void solve()
{

    {
        long long n, k;
        cin >> n >> k;

        long long cf = (n + k - 1) / k;
        k *= cf;

        cout << (k + n - 1) / n << endl;
    }
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