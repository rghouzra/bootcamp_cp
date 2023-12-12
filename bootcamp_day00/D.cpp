/*
https://vjudge.net/contest/573721#problem/D
*/

#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>
#include <vector>
#include <unistd.h>
#include <stack>
#include <math.h>
#ifndef LOCAL
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#endif

#define foreach(i, a) for (auto i = (a).begin(); i != (a).end(); ++i)
#define PI 3.14159265358979323846
#define UNUSED(x) (void)(x)
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define ll long long
#define ull unsigned ll
#define ld long double
using namespace std;

ll res(string str){
    stack <char> s;

    if(str.empty())
        return 1;
    for (size_t i = 0; i < str.size(); i++)
    {
        if(str[i] == '(' || str[i] == '[')
            s.push(str[i]);
        else if(str[i] == ')' || str[i] == ']')
        {
            if (s.empty())
                  return 0; 
            if ((str[i] == ')' && s.top() == '(') || (str[i] == ']' && s.top() == '['))
                s.pop();
            else 
                return 0;
        }
    }
    return s.empty();
}

int main()
{
    ll n;
    cin >> n;
    cin.ignore();
    string str[n];
    ll result[n];
    for (size_t i = 0; i < n; i++)
    {
        getline(cin, str[i]);
        result[i] = res(str[i]);
    }
    for (size_t i = 0; i < n; i++)
        cout <<( (result[i] == 0) ? "No" : "Yes") << "\n";
}