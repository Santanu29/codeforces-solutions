#include <bits/stdc++.h>
using namespace std;

const string name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (true)
    {
        for (int j = 0; j < 5; j++)
        {
            if (n > i)
                n -= i;
            else
            {
                cout << name[j] << endl;
                return 0;
            }
        }
        i *= 2;
    }
    return 0;
}