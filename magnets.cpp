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

    int conn_magnets = 1;

    for(int i = 1;i<n;i++){
        if((arr[i] == 10 && arr[i-1] == 1) || (arr[i] == 1 && arr[i - 1] == 10)){
            conn_magnets++;
        }
    }

    cout << conn_magnets << endl;

    return 0;
}