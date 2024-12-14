#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    vector<pair<int,int>> ans;
    for(int i = 0; i < n; i++){
        ans.push_back({v[i], i + 1});
    }

    sort(ans.begin(), ans.end());
    for(int i = 0; i < n; i++){
        cout<<ans[i].second<<" ";
    }
 
    return 0;
}