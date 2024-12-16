#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int domino = 2;
    int count = m*n / domino;

    cout << count << endl;

    return 0;
}