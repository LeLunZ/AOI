#include "/Users/luis/stdc++.h"
//#include <bits/stdc++.h>
#include "test.cpp"

static int n, k;

int foo(int m, int v){
    if(m == 0 || v == 1) return 0;
    if(m == 1) return (k-v)*2-1;
    int j = std::max(foo(m-1, v/2+v/4), foo(m, v/2))+1;

    return j;
}


int main() {
    scanf("%d %d", &n, &k);
    int m = foo(k, n);
    return 0;
}