#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll ans = 0;

    for (int i = 0; i < n; i++)
        ans = ans + (n - i + (n - i - 1) * i);

    cout << ans << endl;
    return 0;
}