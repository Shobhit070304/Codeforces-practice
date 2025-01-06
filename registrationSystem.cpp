#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    unordered_map<string, int> m;

    while(n--){
        string name;
        cin>>name;
        if(m[name] == 0){
            m[name]++;
            cout<<"OK"<<endl;
        }
        else{
            cout<<name + to_string(m[name]++)<<endl;
        }
    }

    return 0;
}