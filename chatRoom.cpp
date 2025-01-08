#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, target;
    cin >> s;

    target = "hello";

    int k = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == target[k])
        {
            k++;
        }
    }

    if (k == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}