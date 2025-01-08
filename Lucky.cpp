#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        int n = s.length();

        int first_three = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int last_three = s[n - 1] - '0' + s[n - 2] - '0' + s[n - 3] - '0';

        if (first_three == last_three)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}