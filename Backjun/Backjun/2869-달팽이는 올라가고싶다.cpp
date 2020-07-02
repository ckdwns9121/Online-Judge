#include <stdio.h>
#pragma warning(disable:4996)

 int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	int day = (v - a) / (a-b);
	if ((v - a) % (a - b) == 0) day++;
	else {
		day = day + 2;
	}
	printf("%d", day);

	return 0;
}