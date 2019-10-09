#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
int n, k;

struct pa{
    int first;
    int second;
    int div;
};

std::vector<pa> pizza, chinesisch;
std::map<int, int> take;
int pizzaZ = 0, chinesischZ = 0;

int main() {
    scanf("%d %d", &n, &k);
    int p, c;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &c, &p);
        pizza.push_back({ i, p , p-c});
        chinesisch.push_back({ i,c, p-c});
    }
    std::sort(pizza.begin(), pizza.end(), [](pa x, pa y) {
        return x.div < y.div;
    });
    std::sort(chinesisch.begin(), chinesisch.end(), [](pa x, pa y) {
        return x.div < y.div;
    });
    int pi = 0, ch = 0;
    int ma = 0;
    while (ch < k) {
        ma += chinesisch[ch].second;
        take[chinesisch[ch].first] = 2;
        ch++;
    }
    while (pi < n) {
        if (take[pizza[pi].first] == 2) {
            pi++;
            continue;
        }
        ma += pizza[pi].second;
        take[pizza[pi].first] = 1;
        pi++;
    }
    printf("%d\n", ma);
    for (int i = 0; i < n; i++)
    {
        if (take[i] == 2)
        {
            printf("%d ", i+1);
        }
    }
    return 0;
}
