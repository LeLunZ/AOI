#include "/Users/luis/stdc++.h"
static int n, k, res;
static int f[100005][400];

int main()
{
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= k; i++)
        f[1][i] = 1;

    for (int j = 1; j <= n; j++)
        f[j][1] = j;

    for (int i = 2; i <= k; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            f[j][i] = 100000009;
            for (int x = 1; x <= j; x++)
            {
                res = 1 + std::max(f[x-1][i-1], f[j-x][i]);
                if (res < f[j][i])
                    f[j][i] = res;
            }
        }
    }
    printf("%d", f[n][k]);
    return 0;
} 





