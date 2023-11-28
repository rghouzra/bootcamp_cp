/*
https://vjudge.net/contest/573721#problem/E
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
#include <set>
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
   return 0;
}

int main()
{
    set  <int>t;

    string s;
    while(cin >> s)
    {
        if(s.empty())
            break;
        int n;
        cin >> n;
        cin.ignore();
        if(s == "insert")
        {
            t.insert(n);
        }
        else if(s == "delete")
            t.erase(n);
        else
        {
            cout << ((t.find(n) != t.end()) ? "true" : "false");
            cout <<"\n";
        }
    }
}