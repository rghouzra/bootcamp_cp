/*
https://vjudge.net/contest/574143#problem/I
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
# define endl '\n'

void func(ll n){
    ll ref = ((n*n)+ n)/2;
    if(ref & 1)
    {
        cout << "NO\n";
        return ;
    }
    cout <<"YES ";
    set<ll> first;
    set<ll> second;
    ref /=2;
    vector<ll> tab;
    ll prev =-1;
    ll sum = 0;
    ll i ;
    
    vector<ll> occur(n,-1);
    for (i = n; i >0; i--)
    {
      if(sum +i > ref){
          second.insert(i);
    } 
         else
    {
      first.insert(i);
      sum+=i;
    }
    }
  cout << first.size() <<' ';
  set<ll>::iterator iter;
  for (iter = first.begin();iter != first.end();iter++) {
    cout << *iter << ' ';
  }
  cout << second.size() <<' ';
  for (iter = second.begin();iter != second.end();iter++) {
    cout << *iter << ' ';
  }
  cout << '\n';
    return ;
    cout<<tab.size() <<' ';
    for (size_t i = 0; i < tab.size(); i++)
    {
        cout<< tab[i];
        cout<<' ';
    }
    cout << (count(occur.begin(), occur.end() , -1)) <<' ';
    for (ll i = n-1; i >0; i--)
    {
        if(occur[i] == -1)
        {
            cout << i;
             if(i !=  1)
               cout <<' ';
        }
    }
        cout<<'\n';
    
}

int main() {
    ll n;
    cin >> n;

    func(n);
}
