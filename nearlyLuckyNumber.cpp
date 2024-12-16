#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int cnt = 0;

    n = abs(n);

    if (n == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (n)
    {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            cnt++;
        }
        n /= 10;
    }

    if (cnt == 4 || cnt == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}