#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string word1;
    cin>>word1;

    string word2;
    cin>>word2;

    reverse(word2.begin(), word2.end());

    if(word1 == word2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}