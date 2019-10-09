//#include <bits/stdc++.h>
#include "/Users/luis/stdc++.h"

using namespace std;

static int N, M;
static vector<int> vec[100005];
static set<int> visited;

void foo(int i) {
    for (auto k : vec[i]) {
        if (visited.find(k) == visited.end()) {
            visited.insert(k);
            foo(k);
        }
    }
    printf("%d ", i);
}

int main() {
    scanf("%d %d", &N, &M);
    int a, b;
    for (int i = 0; i < M; ++i) {
        scanf("%d %d", &a, &b);
        vec[b].push_back(a);
    }
    for (int j = 1; j <= N; ++j) {
        if (visited.find(j) == visited.end()) {
            visited.insert(j);
            foo(j);
        }
    }
    return 0;
}
