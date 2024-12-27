#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];

    for(int i=0;i<4;i++){
        cin>>arr[i];
    }

    unordered_map<int, int> m;

    for(int i=0;i<4;i++){
        m[arr[i]]++;
    }

    cout<<4 - m.size()<<endl;

    return 0;
}