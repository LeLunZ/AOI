#include <stdio.h>
int N;
int dp[1005][1005];
int f(int current, int val) {
	if (val == 0) return 1;
	if (current == 0)return 0;

	if (dp[current][val] != -3)return dp[current][val];
	int ans =0;
	for (int i = 0; i*current <= val; i++)
		ans = (ans % 1000000007 + f(current - 1, val - current * i) % 1000000007) % 1000000007;
	dp[current][val] = ans;
	return ans;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < 1001; i++)
	{
		for (int j = 0; j < 1001; j++)
		{
			dp[i][j] = -3;
		}
	}
	printf("%d", f(N,N));
	return 0;
}