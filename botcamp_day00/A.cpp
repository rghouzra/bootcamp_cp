/*
https://vjudge.net/contest/573721#problem/A
*/

#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long tab[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> tab[i];
	}
	for (size_t i = 0; i < n; i++){
		cout << ((tab[i] >= 0) ? tab[i] + 2 : tab[i]);
		if(i != n - 1)
			cout << " ";
	}
}
