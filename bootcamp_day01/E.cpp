/*
https://vjudge.net/contest/574143#problem/E
*/

#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>
#include <unordered_map>
#include <vector>
#include <unistd.h>
#include <stack>
#include <set>
#include <math.h>
#define foreach(i, a) for (auto i = (a).begin(); i != (a).end(); ++i)
#define PI 3.14159265358979323846
#define unused(x) (void)(x)
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define ll long long
#define ull unsigned ll
#define ld long double
using namespace std;

ll power(ll n, ll exp){
	ll result = 1;
	ll mod = 1e9 + 7;
	while(exp >= 1)
	{
		if(exp %2)
			result = (result * n) % mod;
		n = (n * n) % mod;
		exp >>= 1;
	}
	return result;
}

ll calc(ll b, ll end,ll* p)
{
	if(b == 0)
		return p[end  ];
	return p[end  ] ^ p[b - 1];
}
ll mod = 1000000007;
int main(){
	ll n;
	cin >> n; 
	char** g = (char**)malloc(n * sizeof(char*));
    ll** d = (ll**)malloc(n * sizeof(ll*));

    for (ll i = 0; i < n; i++) {
        g[i] = (char*)malloc(n * sizeof(char));
        d[i] = (ll*)malloc(n * sizeof(ll));
		for (ll j = 0; j < n; j++)
		{
			cin >> g[i][j]; 
		}
    }
	if(g[0][0] == '.')
		d[0][0] = 1;
	else
		d[0][0] = 0;
    for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++)
		{
			if(g[i][j] == '.'){
				if(i >= 1)
					d[i][j] += d[i - 1][j];
				if(j >= 1)
					d[i][j] += d[i ][j - 1];
				d[i][j] %= mod;
			}
		}
    }
	cout << d[n -1][n-1] << '\n';
}