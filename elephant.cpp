#include<iostream>

using namespace std;

int main(){
    int d;
    cin>>d;

    int steps = 0;

    steps += d / 5;
    d %= 5;

    steps += d / 4;
    d %= 4;

    steps += d / 3;
    d %= 3;

    steps += d / 2;
    d %= 2;

    steps += d;
    
    cout<<steps<<endl;
}