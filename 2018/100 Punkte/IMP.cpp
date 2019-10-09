#include <stdio.h>
#include <vector>
#include <algorithm>
int n;
int m;
int z;
struct item {
	int costs;
	int gain;
	int provit;
};

std::vector<item> items;
int dyn[150010][10];
int f(int left, int index){
	if (index >= m)return 0;
	if (dyn[index][left] != -1)return dyn[index][left];
	if (left == 0) {
		int res = std::max(f(left, index + 1), items[index].provit);
		dyn[index][left] = res;
		return res;
	}
	int res = std::max(f(left, index + 1), std::min(items[index].provit, f(left - 1, index + 1) - items[index].costs));
	dyn[index][left] = res;
	return res;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &m, &z);
		for (int i = 0; i < m; i++)
		{
			item it;
			int x, y;
			scanf("%d %d", &x, &y);
			it.gain = x;
			it.costs = y;
			it.provit = x - y;
			items.push_back(it);
		}
		std::sort(items.begin(), items.end(), [](item x, item y) {
			return x.gain < y.gain;
		});
		for (int y = 0; y <= m; y++)
		{
			for (int x = 0; x <= z; x++)
				dyn[y][x] = -1;
		}

		printf("%d\n",f(z,0));
		items.clear();
	}
	return 0;
}