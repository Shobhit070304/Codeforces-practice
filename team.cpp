#include<iostream>

using namespace std;

int main(){
    int problems;
    cin>>problems;

    int i, j, k;
    int count = 0;

    while(problems--){
        cin>>i>>j>>k;

        int sure = 0;

        if(i == 1){
            sure++;
        }
        if(j == 1){
            sure++;
        }
        if(k == 1){
            sure++;
        }

        if(sure >= 2){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}