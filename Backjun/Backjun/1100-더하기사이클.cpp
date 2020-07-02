#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num = 0, result = 0, count = 0, temp = 0;
	scanf("%d", &num);
	temp = num;

	while (1) {
		result = (num / 10) + (num % 10);
		num = ((num % 10) * 10) + (result % 10);
		count++;
		if (temp == num) break;

	}
	printf("%d", count);
}