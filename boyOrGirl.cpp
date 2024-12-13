#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string name;
    cin>>name;

    unordered_map<char, int> m;

    for(char c : name){
        m[c]++;
    }

    int distinct_char = m.size();

    if(distinct_char % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}