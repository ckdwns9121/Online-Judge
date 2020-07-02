#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int func(int num) {

	int count = 0;
	int sum = 0;
	if (num == 1) return 1;
	for (int i = 1; i < num; i++) {
		sum += 6 * i;
		if (sum < num - 1) count++;
		else {
			count++;
			break;
		}
	}
	return count + 1;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", func(n));

	return 0;
}