#include <stdio.h>
#include <vector>

void generate(int k, std::vector<bool> &vec, int N)
{
	if (k == N)
	{
		for (int i = 0; i < N; i++)
		{
			if (vec[i] == true)
				printf("%d ", i + 1);
		}
		printf("\n");
	}
	else
	{
		vec[k] = true;
		generate(k + 1, vec, N);
		vec[k] = false;
		generate(k + 1, vec, N);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	std::vector<bool> vec(n);
	generate(0, vec, n);
	return 0;
}