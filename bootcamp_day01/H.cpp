/*
https://vjudge.net/contest/574143#problem/H
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

ll mod = 1000000007;
ll power(ll n, ll exp){
	ll result = 1;
	ll mod = 1e9 + 7;
	if(!n && !exp)
		return 1;
	while(exp >= 1)
	{
		if(exp %2)
			result = (result * n) % mod;
		n = (n * n) % mod;
		exp >>= 1;
	}
	return result;
}



int main(){
	ll n;
	cin >> n; 
	for (ll j = 0; j < n; j++)
	{
		ll a;
		char b;
		cin >> a >> b;
		string s;
		cin >> s;
		ll passed = 0;
		for (size_t i = 0; i < s.size(); i++)
		{
			if(s[i] < (char)b)
			{
				passed = 1;
				cout << (char)b;
				b = 0;
			}
			cout <<s[i];
		}
		if(!passed )
			cout << (char)b ;
		cout<<'\n';
	}
}
