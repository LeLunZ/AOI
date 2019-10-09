#include "/Users/luis/stdc++.h"
//#include <bits/stdc++.h>

using namespace std;


static int n, m, a, b;
static vector<int> vec[100010];
static int colored[100010];
static int cnt = 0;
static vector<int> vec2[100010];

void f(int x) {
    colored[x] = cnt;
    for (auto t : vec[x]) {
        if (colored[t] == 0) {
            f(t);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    int t = 0;
    for (int i = 0; i < m; ++i) {
        scanf("%d %d %d", &t, &a, &b);
        vec[a-1].push_back(b-1);
        vec[b-1].push_back(a-1);
    }
    for (int i = 0; i < n; i++)
    {
        if (colored[i] == 0) {
            cnt++;
            f(i);
        }
    }
    for (int j = 0; j < n; ++j) {
        vec2[colored[j]].push_back(j);
    }
    printf("%d", cnt);
    return 0;
}
