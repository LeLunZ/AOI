#include <stdio.h>
#include <algorithm>
int matrix[10030][10030] = { 0 };

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	int weights[10030];
	int values[10030];
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &weights[i], &values[i]);
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (weights[i - 1] <= j) {
				matrix[i][j] = std::max(matrix[i - 1][j], values[i - 1] + matrix[i - 1][j - weights[i - 1]]);
			}
			else {
				matrix[i][j] = matrix[i - 1][j];
			}
		}
	}
	printf("%d", matrix[m][n]);
	return 0;
}