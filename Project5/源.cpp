#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int i, j, k, l, m, n;
double sum, ans, x, y;
int main() {
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &k);
		sum += k;
	}
	for (i = 1; i <= m; i++)
	{
		scanf("%lf%lf", &x, &y);
		sum -= x * y;
	}
	if (sum == 0) printf("Perfect");
	else
		if (sum > 0) printf("Yes %.1lf", sum);
		else
			printf("No %.1lf", -sum);
}