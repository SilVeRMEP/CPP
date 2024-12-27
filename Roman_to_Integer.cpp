#include <bits/stdc++.h>
using namespace std;

int romanToInt(char* s)
{
    map<char , int> R;

    int t = 0 , l = s.length();
    R['I'] = 1;
    R['V'] = 5;
    R['X'] = 10;
    R['L'] = 50;
    R['C'] = 100;
    R['D'] = 500;
    R['M'] = 1000;


    for (int i = 0 ; i < l ; i++)
    {
        if(i < l - 1 && R[s[i]] < R[s[i + 1]]) t -=R[s[i]];
        else t +=R[s[i]];
    }

    return t;
}