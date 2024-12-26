#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ishard = false;

    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            ishard = true;
            break;
        }
    }

    if(ishard){
        cout<<"Hard"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}