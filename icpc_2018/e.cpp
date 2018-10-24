#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long int a[100005], b[100005], c[100005];

int main()
{
    long long int N, M, K, sum, mn, mx;
    int i, j;
    scanf("%lld %lld %lld", &N, &M, &K);
    sum = 0;
    for (i = 0; i < N; i++) {
        scanf("%lld", &a[i]);
        b[i] = 1 + ((M - a[i]) / K);
        c[i] = b[i];
        sum += b[i];
    }
    sort(c, c + N);
    mn = (1 + (sum - b[0])) / 2;
    for (i = 0; i < N; i++) {
        if (b[i] == c[N - 1]) {
            mx = c[N - 2];
        }
        else {
            mx = c[N - 1];
        }
        mn = min(mn, max(((1 + sum) - b[i]) / 2, mx));
    }
    mx = min(sum / 2, sum - c[N - 1]);
    printf("%lld\n", ((mx - mn) + 1) % MOD);
    return 0;
}