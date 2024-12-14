#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string word;
    cin >> word;

    int min_no_removals = 0;

    for (int i = 1; i < n; i++)
    {
        if (word[i] == word[i - 1])
        {
            min_no_removals++;
        }
    }
    
    cout << min_no_removals << endl;

    return 0;
}