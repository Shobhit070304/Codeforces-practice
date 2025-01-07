#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string pos;
    cin >> pos;

    int cond = 1;

    for (int i = 1; i < pos.size(); i++)
    {
        if (pos[i] == pos[i - 1])
        {
            cond++;
            if (cond == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            cond = 1;
        }
    }

    cout << "NO" << endl;

    return 0;
}