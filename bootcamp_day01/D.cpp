/*
https://vjudge.net/contest/574143#problem/D
*/
#include <stdio.h>
#include <iostream>

#define ll long long
using namespace std;
# define endl '\n'
int main() {
    ll n;
    cin>> n;
    
    ll a1 = 0, a2= 1, next = 1;
    ll tmp;
    while(next <= n)
    {
        tmp =  a1  + a2;
        a1 = a2;
        a2 = tmp;
        next++;
    }
    cout << a2 << endl;
}