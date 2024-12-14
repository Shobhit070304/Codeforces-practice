#include <iostream>
 
using namespace std;
 
int main(){
 
    int k, n, w;  
    // k->cost of first banana 
    // n->initial no of dollars the soldier has 
    // w->no of bananas he wants

    cin>>k>>n>>w;

    int total_cost = 0;
    for(int i = 1; i <= w; i++){
        total_cost += k * i;
    }

    if(total_cost <= n){
        cout<<0<<endl;
    }
    else{
        cout<<total_cost - n<<endl;
    }
    return 0;
}