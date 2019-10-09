#include <stdio.h>
#include <vector>
#include <algorithm>

int n;

std::vector<int> vec[300010];
//go way
int ff(int from, int me, int c) {
	int ret = c - vec[me].size() + (me == 0 ? 0 : 1);
	for (auto &val : vec[me])
	{
		if (val != from)
		{
			ret += ff(me, val, c);
		}
	}
	return std::min(0, ret);
}

int main() {
	scanf("%d", &n);
	int f, t;
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d %d", &f, &t);
		vec[f - 1].push_back(t - 1);
		vec[t - 1].push_back(f - 1);
	}
	int left = 0, right = n, max;
	int r;
	while (left != right) {
		max = (right + left) / 2;
		r = ff(0, 0, max);
		if (r == 0)
		{
			right = max;
		}
		else {
			left = max + 1;
		}
	}
	printf("%d", left);
	return 0;
}