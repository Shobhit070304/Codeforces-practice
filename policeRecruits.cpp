#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int crimes = 0;
    int recruits = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (recruits > 0)
            {
                recruits--;
            }
            else
            {
                crimes++;
            }
        }
        else
        {
            recruits += arr[i];
        }
    }

    cout << crimes << endl;

    return 0;
}