/*
https://vjudge.net/contest/574143#problem/A
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
	return p[end  ] - p[b - 1];
}

int main(){
	ll n;
	ll q;
	scanf("%lld", &n);
	scanf("%lld", &q);
	ll p[n];
	for (ll i = 0; i < n; i++)
	{
		ll in;
		scanf("%lld", &in);
		if(i == 0)
			p[i] = in;
		else
			p[i] = p[i - 1] + in;
	}
	for (ll i = 0; i < q; i++)
	{
		ll begin, end;
		scanf("%lld", &begin);
		scanf("%lld", &end);
		printf("%lld\n", calc(begin - 1, end - 1, p));
	}
}