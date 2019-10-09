#include <stdio.h>
#include <algorithm>
#include <list>
#include <vector>
int apps;
int mb;
struct app {
	int installationsize;
	int max;
	int download;
	int num;
};

std::vector<app> vec;
int dyn[10020][10020];
bool way[10020][10020];

void printWay(int leftStorage, int index)
{
	if (index == apps)return;

	if (way[index][leftStorage] == 1)
	{
		printf("%d ", vec[index].num);
		printWay(leftStorage - vec[index].installationsize, index + 1);
	}
	else {
		printWay(leftStorage, index + 1);
	}
}

int solveWays(int num, int c) {
	if (apps == num)
	{
		return 0;
	}
	if (dyn[num][mb-c] != 0)
	{
		return dyn[num][mb-c];
	}
	int withoutTake = solveWays(num + 1, c);
	if (mb >= c+std::max(vec.at(num).installationsize, vec.at(num).download))
	{
		int take = 1+solveWays(num + 1, c + vec.at(num).installationsize);
		if (take > withoutTake)
		{
			way[num][mb-c] = true;
			dyn[num][mb-c] = take;
			return take;
		}
	}
	dyn[num][mb - c] = withoutTake;
	return withoutTake;
}

int main() {
	scanf("%d %d", &apps, &mb);
	for (int i = 0; i < apps; i++)
	{
		app appsL;
		scanf("%d %d", &appsL.download, &appsL.installationsize);
		appsL.download = std::max(appsL.download, appsL.installationsize);
		appsL.max = appsL.download - appsL.installationsize;
		appsL.num = i + 1;
		vec.push_back(appsL);
	}
	std::sort(vec.begin(), vec.end(), [](app& left, app& right) -> bool
	{
		return left.max > right.max;
	});
	int result = solveWays(0, 0);
	printf("%d\n", result);
	if (result != 0)
	{
		printWay(mb, 0);
	}
	return 0;
}
