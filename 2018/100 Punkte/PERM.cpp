#include <algorithm>

int main() {
	int n;
	scanf("%d", &n);
	int arr[10];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	do {
		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	} while (std::next_permutation(arr, arr+ n));
	return 0;
}