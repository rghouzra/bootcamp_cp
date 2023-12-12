/*
https://vjudge.net/contest/573721#problem/G
*/

#include <unordered_map>
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
ll res(string str){
   return 0;
}

typedef struct s
{
    ll x;
    ll y;
}ss;

void func(ll *arr, ll x, ll i, ss *s, unordered_map<ll, ll> &indexes) {

        ll c = x - arr[i];
        if (indexes.count(c)) {
			s->x = indexes[c] + 1;
			s->y = i + 1;
            return;
    }
}

int main() {
	    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
	map<ll, ll> indexes;
    ll n, sum;
    cin >> n;
	
	cin >> sum;
    
	ll arr[n];
	ss a = {-1, -1}; 
    for (ll i = 0; i < n; i++) 
	{
        cin >> arr[i];
		ll c = sum - arr[i];
        if (indexes.count(c)) {
			a.x = indexes[c] + 1;
			a.y = i + 1;
            break;;
    }
		indexes[arr[i]] = i;
	}
	if(a.x == -1)
	{
		cout << "IMPOSSIBLE" << '\n';
		return 0;
	}
	cout<< a.x << ' ' << a.y<< endl;
}