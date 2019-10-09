#include "/Users/luis/stdc++.h"

#define int int64_t
#define INF LONG_LONG_MAX/2
#define MAX 3005

using namespace std;

char str1[MAX];
char str2[MAX];

int lenA;
int lenB;

int dp[MAX][MAX];
int sp[MAX][MAX];

int f(int a, int b) {
    if(a >= lenA || b >= lenB) return 0;

    if(dp[a][b] != -1)return dp[a][b];

    if(str1[a] == str2[b]) {
        dp[a][b] = 1+f(a+1,b+1);
        sp[a][b] = 3;
        return dp[a][b];
    }else {
        int left = f(a+1,b);
        int right = f(a,b+1);

        int r = left;
        if(left > right) {
            sp[a][b] = 2;
        }else {
            sp[a][b] = 1;
            r = right;
        }

        dp[a][b] = r;
        return r;
    }
}

signed main() {
    scanf("%s", &(str1[0]));
    scanf("%s", &(str2[0]));

    lenA = strlen(str1);
    lenB = strlen(str2);

    str1[lenA] = '\0';
    str2[lenB] = '\0';

    for(int y=0; y<MAX; y++) {
        for(int x=0; x<MAX;x++){
            dp[y][x] = -1;
        }
    }

    //printf("%lld\n", f(0,0));
    f(0,0);

    int a = 0;
    int b = 0;
    while(1 == 1){
        if(sp[a][b] == 3){
            printf("%c", str1[a]);
            a++;
            b++;
        }else if(sp[a][b] == 2){
            a++;
        }else if(sp[a][b] == 1){
            b++;
        }else{
            break;
        }
    }
}
