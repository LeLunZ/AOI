#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int x,y,i;
	scanf("%d %d", &x, &y);
	vector<int> v(x, 0);
	for (i=x;i>x-y;)v[--i]=1;
	do
	{
		for (i=0;i<x;)
			if (v[i++])
				printf("%d ", i);
		puts("");
	} while (next_permutation(v.begin(), v.end()));
	return 0;
}