#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a;
    int k;
    cin >> a >> k;

    while (k--)
    {
        int last_digit = a % 10;
        if (last_digit != 0)
        {
            a = a - 1;
        }
        else
        {
            a = a / 10;
        }
    }

    cout << a << endl;

    return 0;
}