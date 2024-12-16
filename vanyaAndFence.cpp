#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int heights[n];

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (heights[i] > h)
        {
            count += 2;
        }
        else
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}