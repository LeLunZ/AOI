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
	scanf("%d %d", &n, &m);
	int c, g;
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &c, &g);
		vec[c-1].push_back(g-1);
		vec[g-1].push_back(c-1);
	}
	for (int i = 0; i < n; i++)
	{
		if (colored[i] == 0) {
			cnt++;
			f(i);
		}
	}

	printf("%d", cnt);
	return 0;
}