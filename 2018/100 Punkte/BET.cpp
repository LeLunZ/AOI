#include <stdio.h>
#include <vector>
#include <algorithm>
int bet;
double moneyl = 0, moneyr = 0, lm = 0, rm = 0;
std::vector<double> left, right;
int main() {
	scanf("%d", &bet);
	for (int i = 0; i < bet; i++)
	{
		double x, y;
		scanf("%lf %lf", &x, &y);
		left.push_back(x);
		right.push_back(y);
	}
	std::sort(left.begin(), left.end(), [](double x, double y) {
		return x > y;
	});
	std::sort(right.begin(), right.end(), [](double x, double y) {
		return x > y;
	});
	int l = 0, r = 0;
	moneyl = left[l] - 2;
	l++;

	moneyr = right[r] - 2;
	r++;
	double ma = std::min(moneyl, moneyr);
	while (true)
	{
		//printf("%d %d\n", l, r);
		if (moneyr < moneyl)
		{
			if (r == bet)
				break;
			moneyr += right[r] - 1;
			r++;
			moneyl -= 1;
		}
		else
		{
			if (l == bet)
				break;
			moneyl += left[l] - 1;
			l++;
			moneyr -= 1;
		}
		ma = std::max(std::min(moneyl, moneyr), ma);
		if (l == bet && r == bet)
			break;
	}
	printf("%.4lf\n", ma < 0 ? 0 : ma);
	return 0;
}