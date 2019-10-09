//#include "/Users/luis/stdc++.h"
#include <bits/stdc++.h>

static std::vector<int> no[2004];
static std::vector<std::pair<int, int>> noB[2004];
static bool vi[2004][2540];
static int n, m, k;
static int kg;

int ggT(int z1, int z2) {
    if (z2 == 0) {
        return z1;
    }
    return ggT(z2, z1 % z2);
}

int kgV(int z1, int z2) {
    return (z1 * z2) / ggT(z1, z2);
}

bool checkNode(int n, int t) {
    if (k == 0)
        return true;
    for (std::pair<int, int> i : noB[n]) {
        if (((t % i.second == i.first)))
            return false;
    }
    return true;
}

int bfs() {
    std::queue<std::pair<int, int>> q;
    q.push({1, 0});
    vi[1][0] = true;
    while (!q.empty()) {
        int nod = q.front().first;
        int t = q.front().second;
        q.pop();
        if (n == nod)
            return t;
        for (int i = 0; i < no[nod].size(); ++i) {
            int v = no[nod][i];
            if (checkNode(v, t + 1) && !vi[no[nod][i]][(t + 1) % kg]) {
                q.push({no[nod][i], t + 1});
                vi[no[nod][i]][(t + 1) % kg] = true;
            }
        }
        if (vi[nod][(t + 1) % kg] || !checkNode(nod, t + 1)) {
            continue;
        }
        vi[nod][(t + 1) % kg] = true;
        q.push({nod, t + 1});
    }
    return -1;
}

int main() {
    scanf("%d %d %d", &n, &m, &k);
    int t1, t2;
    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &t1, &t2);
        no[t1].push_back(t2);
        no[t2].push_back(t1);
    }
    std::vector<int> kgVA;
    for (int j = 0; j < k; ++j) {
        scanf("%d", &t1);
        kgVA.push_back(t1);
        for (int i = 0; i < t1; ++i) {
            scanf("%d", &t2);
            noB[t2].push_back({i, t1});
        }
    }
    if (!kgVA.empty()) {
        int w = kgVA[0];
        for (int l = 1; l < kgVA.size(); ++l) {
            w = kgV(w, kgVA[l]);
        }
        kg = w;
    } else {
        kg = 1;
    }
    int w = bfs();
    printf("%d", w);
    return 0;
}

/*
6 7 2
1 2
1 3
2 5
5 6
3 6
4 6
3 4
5 2 1 3 6 5
3 4 3 6
 */

/*

 */

/*
4 3 1
1 2
2 3
2 4
2 3 2
 */

/*
4 3 1
1 2
2 3
2 4
2 2 3
 */