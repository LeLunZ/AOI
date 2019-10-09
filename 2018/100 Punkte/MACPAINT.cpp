#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
int x, y, f;
struct brush {
    int x;
    int y;
    int c;
};
int bild[1010][1010];
std::vector<brush> br;
void ff(int fromx, int fromy, int mex, int mey, int c, int vc) {
    if (mey<y && mex < x && mex >= 0 && mey >= 0 && vc == bild[mey][mex] && bild[mey][mex] != 1) {
        bild[mey][mex] = c;
    }
    else
    return;
    if (bild[mey][mex+1] != c)
    ff(mex, mey, mex + 1, mey, c, vc);
    if (bild[mey+1][mex] != c)
    ff(mex, mey, mex, mey + 1, c, vc);
    if (bild[mey][mex-1] != c)
    ff(mex, mey, mex - 1, mey, c, vc);
    if (bild[mey-1][mex] != c)
    ff(mex, mey, mex, mey - 1, c, vc);
}

int main() {
    scanf("%d %d %d", &x, &y, &f);
    int v;
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            scanf("%d", &v);
            bild[i][j] = v;
        }
    }
    int xb, yb, b;
    for (int k = 0; k < f; ++k) {
        scanf("%d %d %d", &xb, &yb, &b);
        brush bra;
        bra.c = b;
        bra.x = xb;
        bra.y = yb;
        br.push_back(bra);
    }
    for (int l = br.size()-1; l >= 0; --l) {
        if (bild[br[l].y][br[l].x] == 0){
            ff(br[l].x, br[l].y, br[l].x, br[l].y, br[l].c, bild[br[l].y][br[l].x]);
        }
    }
    for (int m = 0; m < y; ++m) {
        for (int i = 0; i < x; ++i) {
            printf("%d ", bild[m][i]);
        }
        printf("\n");
    }
    return 0;
}