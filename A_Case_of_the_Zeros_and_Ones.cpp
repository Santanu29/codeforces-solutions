#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z = count(s.begin(), s.end(), '0');
    int o = count(s.begin(), s.end(), '1');
    cout << abs(z - o) << endl;

    return 0;
}