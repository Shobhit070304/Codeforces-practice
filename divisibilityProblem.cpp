#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ans;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        int m = x % y;

        if (m == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int inc = y - m;
            cout << inc << endl;
        }
    }

    return 0;
}