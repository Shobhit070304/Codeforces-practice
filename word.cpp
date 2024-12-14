#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word;
    cin >> word;

    int upper_case = 0;
    int lower_case = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            upper_case++;
        }
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            lower_case++;
        }
    }

    if (lower_case >= upper_case)
    {

        for (char &c : word)
        {
            c = tolower(c);
        }
    }
    else
    {
        for (char &c : word)
        {
            c = toupper(c);
        }
    }

    cout<<word<<endl;

    return 0;
}