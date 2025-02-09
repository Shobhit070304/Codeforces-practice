#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string temp;
        cin >> temp;

        string new_temp = "";
        for (int i = 0; i < temp.length() - 2; i++)
        {
            new_temp += temp[i];
        }
        new_temp += 'i';
        cout << new_temp << endl;
    }

    return 0;
}