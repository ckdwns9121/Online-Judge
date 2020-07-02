#include <stdio.h>
#pragma warning(disable:4996)

int d[1001];

int dp(int x) {
	if (x == 1)return 2;
	if (x == 2)return 3;
	if (d[x] != 0) return d[x];
	int result = 2 * dp(x - 1) + 3 * dp(x - 2);
}