#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Location of 1
    int x = 0, y = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
                break;
            }
        }
    }

    int min_moves = abs(3 - x) + abs(3 - y);

    cout << min_moves << endl;

    return 0;
}