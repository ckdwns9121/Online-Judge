#include <stdio.h>
#pragma warning(disable:4996)
int d[46];

int dp(int x) {
	if (x == 1)return 1;
	if (x == 2)return 1;
	if (d[x] != 0) return d[x];
	return d[x] = dp(x - 1) + dp(x - 2);

}
int main() {
	int num;
	scanf("%d", &num);
	printf("%d", dp(num));
	return 0;
}