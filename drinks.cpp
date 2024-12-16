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

    int total_amount = 0;

    for (int i = 0; i < n; i++)
    {
        total_amount += arr[i];
    }

    float average = total_amount / (n*100.0);

    cout << average*100.0 << endl;

    return 0;
}