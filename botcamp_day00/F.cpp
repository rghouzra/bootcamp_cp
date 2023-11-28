/*
https://vjudge.net/contest/573721#problem/F
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

typedef struct s
{
    int index;
    int max;
}ss;

int main()
{
    ll n;
    cin >> n;
    ss aa;
    vector<string> words;
    string s;
    string m;
    vector<string>occur;
    ll max = 0;
    int index;
    ll c;
    map<string, int> a;
    ll i = 0;
    while(i < n){
        cin >>s;
        cin.ignore();
        words.push_back(s);
        i++;
    }
    sort(words.begin(), words.end());
    aa.max = 0;
    aa.index = 0; i = 0;
    while ( i < n)
    {
        c = 1;
        while(words[i] == words[i + 1] && i < n)
        {
            i++;
            c++;
        }
        if(aa.max <= c)
        {
            aa.index = i;
            aa.max = c;
        }
            i+= (c== 1);
    }

    cout << words[aa.index] << " " << aa.max;
}