#include <vector>
#include <stdio.h>

std::vector<int> vec[100010];
int colored[100010];

int cnt = 0;
int n, m;

void f(int x) {

	colored[x] = cnt;
	
	for (auto t : vec[x]) {
		if (colored[t] == 0) {
			f(t);
		}
	}

}

int main() {
	scanf("%d", &n);
	int c, g;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &c);
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &g);
			vec[i].push_back(g - 1);
			vec[g - 1].push_back(i);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (colored[i] == 0) {
			cnt++;
			f(i);
		}
	}

	printf("%d", cnt-1);
	return 0;
}