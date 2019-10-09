#include <stdio.h>

int matrix[110][110];
int lines;
int dyn[110][110] = {0};
int solve(int sum, int line, int num) {
	if (dyn[line][num] != 0)
	{
		return dyn[line][num];
	}
	if (lines-1 == line)
	{
		dyn[line][num] = matrix[line][num];
		return matrix[line][num];
	}
	int x = solve(sum+matrix[line][num],line+1, num+1);
	int y = solve(sum + matrix[line][num], line + 1, num);
	dyn[line][num] = x > y ? matrix[line][num] + x : matrix[line][num] + y;
	return x > y ? matrix[line][num] +x : matrix[line][num] + y;
}

int main() {
	
	scanf("%d", &lines);
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	int v = solve(0, 0,0);
	printf("%d", v);
	return 0;
}