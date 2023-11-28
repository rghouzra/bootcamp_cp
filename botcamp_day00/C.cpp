/*
https://vjudge.net/contest/573721#problem/C
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

ll res(vector<ll> &nbrs, ll count){
    sort(nbrs.begin(), nbrs.end());
    for (size_t i = 0; i < nbrs.size(); i++)
    {
        cout << nbrs[i] ;
        if(i != nbrs.size() - 1)
            cout << " ";
    }
    
    // cout << *max_element(nbrs.begin(), nbrs.end());
    return 0;
}



int main()
{
    ll n;
    scanf("%lld", &n);
    ll instruction[n];
    ll queries[n];
    stack<ll> tab; 
    int j = 0;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%lld", &instruction[i]);        
       if(instruction[i] == 1)
       scanf("%lld", &queries[j++]);
    }
    j = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(instruction[i] == 1)
            tab.push(queries[j++]);
        else if(instruction[i] == 2)
        {
            if(!tab.empty())
                tab.pop();
        }
        else if(instruction[i] == 3)
        {
            if(!tab.empty())
                cout << tab.top()<< "\n";
            else
             cout << "Empty!" << "\n";
        }
    } 
}