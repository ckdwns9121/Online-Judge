#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n;
	int cnt = 99;
	int A = 0, B = 0, C = 0;
	scanf("%d", &n);
	if (n < 100) {
		printf("%d\n", n);
		return 0;
	}
	for (int i = 100; i <= n; i++) {
		A = i / 100;
		B = (i % 100) / 10;
		C = i % 10;
		if (B - A == C - B) cnt++;
	}
	printf("%d", cnt);
	return 0;

}