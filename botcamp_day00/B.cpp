/*
https://vjudge.net/contest/573721#problem/B
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

ll res(vector<ll> &nbrs, ll count){
    sort(nbrs.begin(), nbrs.end());
    for (size_t i = 0; i < nbrs.size(); i++)
    {
        cout << nbrs[i] ;
        if(i != nbrs.size() - 1)
            cout << " ";
    }
    return 0;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> tab(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    res(tab, n);
}