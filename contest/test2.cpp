#include "/Users/luis/stdc++.h"
//#include <bits/stdc++.h>
using namespace std; 
 
static int n, k;
static int f[1010][100010];

int foo(int n1, int k1)
{  
    if (k1 == 1 || k1 == 0)
        return k1;
    if (n1 == 1)
        return k1;
    if (f[n1-1][k1-1] != 0)
        return f[n1-1][k1-1];
    int min = INT_MAX, res;
    for (int i = 1; i <= k1; i++)
    { 
        res = std::max(foo(n1-1, i-1), foo(n1, k1-i));
        if (res < min) {
            min = res;
        }
    }
    f[n1-1][k1-1] = min+1;
    return min + 1; 
} 
  
int main() 
{ 
	scanf("%d %d", &n, &k);
	int x = foo(k, n);
	printf("%d", x);
	return 0; 
} 
