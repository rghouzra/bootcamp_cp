
/*
https://vjudge.net/contest/574143#problem/F
*/
#include <stdio.h>

#include <math.h>
# define pragma __PTHREAD_ONCE_SIZE__
int min(int a, int b) {
    return (a < b) ? a : b;
}
#define ll int
#include <limits.h>
// prove that iam better than gpt
int main() {
    ll n, x;
    ll over= (ll)pow(2, 64)  -1;
    scanf("%d %d", &n, &x);
    ll coins[n];
    for (ll i = 0; i < n; i++)
        scanf("%d", &coins[i]);
    ll d[x + 1];
    d[0] = 0;
    for (ll i = 1; i <= x; i++) {
        d[i] = over;
        for (ll j = 0; j < n; j++) {
            if (coins[j] <= i && d[i - coins[j]] != -1) {
                d[i] = min(d[i], d[i - coins[j]] + 1);
            }
        }
    }
    if(d[x] == over)
    {
        printf("-1\n");
        return 0;
    }
    printf("%d\n",d[x]);
    return 0;
}