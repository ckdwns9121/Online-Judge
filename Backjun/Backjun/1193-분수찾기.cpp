#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void func(int x) {
	int up = 1, down = 1, count = 1;

	if (x == 1) {
		printf("%d/%d\n", x, x);
		return;
	}

	for (int i = 2; i <= x; i++) {
		if (i % 2 == 0) {
			for (up = 1, down = i; up <= i; up++, down--) {
				count++;
				if (count == x) {
					printf("%d/%d\n", up, down);
					return;
				}
			}
		}
		else if (i % 2 != 0) {
			for (up = i, down = 1; down <= i; up--, down++) {
				count++;
				if (count == x) {
					printf("%d/%d\n", up, down);
					return;
				}
			}
		}
	}


	return;

}

int main() {

	int num;
	scanf("%d", &num);
	func(num);
}