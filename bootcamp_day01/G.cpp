/*
https://vjudge.net/contest/574143#problem/G
*/

#include <stdio.h>
#include <stdlib.h>
# define int long long
 main() {
    int n;
    scanf("%lld",& n);

   	int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", a+ i);
        if(i)
        if (a[i] < a[i - 1]) {
            sum += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    printf("%lld\n", sum);
    return 0;
}
