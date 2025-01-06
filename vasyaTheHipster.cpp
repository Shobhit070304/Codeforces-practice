#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, b;
    cin >> r >> b;

    int diff = min(r, b);
    int same = (max(r, b) - diff) / 2;

    cout << diff << " " << same << endl;

    return 0;
}