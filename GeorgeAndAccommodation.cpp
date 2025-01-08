#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    while(n--){
        int a, b;
        cin >> a >> b;

        if(b - a >= 2){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}