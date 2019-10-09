#include <stdio.h>
#include <map>
#include <list>
#include <vector>
int num[200020] = { 0 };
int max;
int previews[200020] = { 0 };
int nexts[200020] = { 0 };
std::map<int, int> val;
bool solve(int begin, int end) {
	if (begin >= end)return true;
	int mitte = (begin + end) / 2;
	for (int i = begin, j = end; j >= mitte&& i <= mitte; i++, j--)
	{
		if (previews[i] < begin && nexts[i] > end) {
			return solve(begin, i - 1) && solve(i + 1, end);
		}
		if (previews[j] < begin && nexts[j] > end) {
			return solve(begin, j - 1) && solve(j + 1, end);
		}
	}
	return false;
}

int main() {
	scanf("%d", &max);
	for (int i = 0; i < max; i++)
	{
		val.clear();
		int count;
		scanf("%d", &count);
		for (int i = 1; i <= count; i++)
		{
			scanf("%d", &num[i]);
			previews[i] = 0;
			nexts[i] = count+1;
		}
		for (int i = 1; i <= count; i++)
		{
			previews[i] = val[num[i]];
			nexts[previews[i]] = i;
			val[num[i]] = i;
		}
		int out = solve(1, count);
		if (out == true)
		{
			printf("non-boring\n");
		}
		else {
			printf("boring\n");
		}
	}
	return 0;
}
