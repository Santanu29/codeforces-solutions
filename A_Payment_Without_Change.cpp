#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        if (S % n <= b && (a * n + b) >= S)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}