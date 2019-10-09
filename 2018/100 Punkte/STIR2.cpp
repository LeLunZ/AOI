#include <stdio.h>
long long N;
long long m;
long long back[1010][1010] = {-1};
long long f(long long x, long long y) {
	if (x == 0 && y == 0)
	{
		return 1;
	}
	if (x == 0 || y == 0)
	{
		return 0;
	}
	if (back[x][y] != -1)
	{
		return back[x][y];
	}
	long long b = ((f(x - 1, y-1)%1000000007) + (y*f(x - 1, y)% 1000000007))% 1000000007;
	back[x][y] = b;
	return b;
}

int main() {
	scanf("%d %d", &N, &m);
	for (int i = 0; i < 1010; i++)
	{
		for (int j = 0; j < 1010; j++)
		{
			back[i][j] = -1;
		}
	}
	printf("%d", f(N, m));
	return 0;
}