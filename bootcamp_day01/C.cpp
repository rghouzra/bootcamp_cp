/*
https://vjudge.net/contest/574143#problem/C
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



ll calc(ll b, ll end,ll* p)
{
	if(b == 0)
		return p[end  ];
	return p[end  ] ^ p[b - 1];
}

int main(){
	ll n;
	ll sum;
	cin >> n;
	cin>> sum;
	ll subs = 0;
	ll current = 0;
	vector<ll>	tab(n);
	for (long long i = 0; i < n; i++)
		cin >> tab[i];
        vector <ll> pre(n+1, 0);
        unordered_map <ll,ll>occur;
        occur[0] = 1;
        ll rs = 0;
;	for (long long i = 0; i < n ; i++)
	{
		pre[i+1] =pre[i] + tab[i];
        rs += occur[pre[i+1] - sum];
        occur[pre[i+ 1]]++;
	}
	cout << rs << endl;
}