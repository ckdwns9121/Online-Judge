#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a, b, c; //1000 70 170;
	scanf("%d%d%d", &a, &b, &c);
	if (b >= c) printf("-1\n");
	else printf("%d" ,a / (c - b) + 1);

	return 0;
}